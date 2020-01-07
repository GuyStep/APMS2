//
// Created by guy on 07/01/2020.
//

#ifndef APMS2_FILECACHEMANAGER_H
#define APMS2_FILECACHEMANAGER_H

#include "CacheManager.h"

template<class P, class S>
class FileCacheManager : public CacheManager<P,S> {
 private:
  unordered_map <P,bool> myCache {};

 public:
    FileCacheManager()= default;
  void saveSolution(P key, S solution) override{
      myCache.insert(pair<P, bool>(key, true));
      writeToFile(key, solution);
  }


  void writeToFile(P key, S solution) { // We need to take care of double names
    string file_name = key.class_name + key;
    fstream myFile;
    myFile.open(file_name, ios::out | ios :: binary | ios::trunc);
    if (myFile.is_open()) {
      myFile.write((char *)&solution, sizeof(solution));
      myFile.close();
    } else {
      throw ("file didnt open");
    }
  }

  S readFromFile(P key,S solution) {
    ifstream infile(key, ios::binary | ios:: in);
    if (!infile) {
      throw ("cant open file");
    }
    infile.read((char *) &solution, sizeof(solution));
    infile.close();
    return solution;
  }

  S returnSolution(P key,S solution) override {
    string file_name = key.class_name + key;
    bool flag = isExist(file_name);
    if (flag) {
      S object1 = readFromFile(key, object1);
      return object1;
    } else {
      throw ("file doesnt exist");
    }
  }

  bool isExist(string filename) override{
    ifstream ifile(filename);
    return (bool)ifile;
  }

};

#endif //APMS2_FILECACHEMANAGER_H
