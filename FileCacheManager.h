//
// Created by guy on 07/01/2020.
//

#ifndef APMS2_FILECACHEMANAGER_H
#define APMS2_FILECACHEMANAGER_H

#include "CacheManager.h"


class FileCacheManager : public CacheManager {
 private:
  unordered_map <string,bool> myCache {};

 public:
    FileCacheManager()= default;
  void saveSolution(string key, string solution) override{
    std::size_t h1 = std::hash<std::string>{}(key);
    std::string hashKey = to_string(h1);
    myCache.insert(pair<string, bool>(hashKey, true));
      writeToFile(hashKey, solution);
  }

  void writeToFile(string key, string solution) { // We need to take care of double names
    std::size_t h1 = std::hash<std::string>{}(key);
    std::string hashKey = to_string(h1);

    string file_name = hashKey;

    fstream myFile;
    myFile.open(file_name, ios::out | ios :: binary | ios::trunc);
    if (myFile.is_open()) {
      myFile.write((char *)&solution, sizeof(solution));
      myFile.close();
    } else {
      throw ("file didnt open");
    }
  }

  string readFromFile(string key,string solution) {
    std::size_t h1 = std::hash<std::string>{}(key);
    std::string hashKey = to_string(h1);
    ifstream infile(hashKey, ios::binary | ios:: in);
    if (!infile) {
      throw ("cant open file");
    }
    infile.read((char *) &solution, sizeof(solution));
    infile.close();
    return solution;
  }

  string returnSolution(string key) override {
    std::size_t h1 = std::hash<std::string>{}(key);
    std::string hashKey = to_string(h1);
    string file_name = key;
    bool flag = isExist(file_name);
    if (flag) {
      string object1;
      object1 = readFromFile(hashKey, object1);
      return object1;
    } else {
      throw ("file doesnt exist");
    }
  }

  bool isExist(string problem) override{
    std::size_t h1 = std::hash<std::string>{}(problem);
    std::string hashKey = to_string(h1);
    return this->myCache.count(hashKey) != 0;
  }

};

#endif //APMS2_FILECACHEMANAGER_H
