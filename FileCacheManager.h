//
// Created by guy on 07/01/2020.
//

#ifndef APMS2_FILECACHEMANAGER_H
#define APMS2_FILECACHEMANAGER_H

#include "CacheManager.h"

<T> class FileCacheManager : public CacheManager  {
 private:
  unordered_map <string,pair<T,list<string>::iterator>> myCache {};
  list<string> priorityList;
  unsigned long capacityCache;
 public:
  CacheManager(int capacity) {
    this->capacityCache = capacity;
  }
  void insert(string key, T obj) {
    if (myCache.find(key) != myCache.end()) { //key exist in cache
      auto bufPair = myCache.find(key);
      priorityList.remove(*(bufPair->second.second));
      priorityList.push_front(key);
      myCache.erase(key);
      auto iter = priorityList.begin();
      myCache.insert(pair<string,pair<T, list<string>::iterator>>(key,pair<T,list<string>::iterator>(obj,iter)));
      writeToFile(key,obj);
      return;
    }

    //there is place in the cache
    if (myCache.size() < this->capacityCache) {
      priorityList.push_front(key);
      auto iter = priorityList.begin();
      myCache.insert(pair<string, pair<T, list<string>::iterator>>(key, pair<T, list<string>::iterator>(obj, iter)));
      writeToFile(key,obj);

    } else { // no place and need to replace
      //erase the last one
      string keyBack = priorityList.back();
      myCache.erase(keyBack);
      //insert the new object
      priorityList.remove(keyBack);
      priorityList.push_front(key);
      auto iter = priorityList.begin();
      myCache.insert(pair<string, pair<T, list<string>::iterator>>(key, pair<T, list<string>::iterator>(obj, iter)));
      writeToFile(key,obj);
    }
  }
  void writeToFile(string key,T obj) {
    string file_name = obj.class_name;
    fstream myFile;
    myFile.open(key + file_name, ios::out | ios :: binary | ios::trunc);
    if (myFile.is_open()) {
      myFile.write((char *)&obj, sizeof(obj));
      myFile.close();
    } else {
      throw ("file didnt open");
    }
  }
  T readFromFile(string key,T obj) {
    string file_name = obj.class_name;
    ifstream infile(key + file_name, ios::binary | ios:: in);
    if (!infile) {
      throw ("cant open file");
    }
    infile.read((char *) &obj, sizeof(obj));
    infile.close();
    return obj;
  }
  T get(string key) {
    //exist in the list
    if (myCache.find(key) != myCache.end()) {
      auto bufPair = myCache.find(key);
      priorityList.remove(*(bufPair->second.second));
      priorityList.push_front(key);
      bufPair->second.second = priorityList.begin();
      return bufPair->second.first;
    }/// not in cache
    string fileName = key + T::class_name;
    bool flag = fexists(fileName);
    if (flag) {
      T object1 = readFromFile(key, object1);
      string keyBack = priorityList.back();
      auto bufPair = myCache.find(keyBack);
      priorityList.remove(*(bufPair->second.second));
      myCache.erase(keyBack);
      priorityList.push_front(key);
      auto iter = priorityList.begin();
      myCache.insert(pair<string, pair<T, list<string>::iterator>>(key, pair<T, list<string>::iterator>(object1, iter)));
      return object1;
    } else {
      throw ("file doesnt exist");
    }
  }
  bool fexists(string filename)
  {
    ifstream ifile(filename);
    return (bool)ifile;
  }

};

#endif //APMS2_FILECACHEMANAGER_H
