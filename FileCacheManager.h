//
// Created by guy on 07/01/2020.
//

#ifndef APMS2_FILECACHEMANAGER_H
#define APMS2_FILECACHEMANAGER_H

#include "CacheManager.h"

//This cache holds no solution on the stack,only in files.
//Although, it has a map that can check if the solution exists in files in O(1) time complexity.
class FileCacheManager : public CacheManager {
private:
    unordered_map <string,bool> cache_map {};

public:
    FileCacheManager()= default;
    void saveSolution(string key, string solution) override{
        std::size_t h1 = std::hash<std::string>{}(key);
        std::string hashKey = to_string(h1);
        cache_map.insert(pair<string, bool>(hashKey, true));
        writeToFile(hashKey, solution);
    }

    void writeToFile(string key, string solution) {
        std::size_t h1 = std::hash<std::string>{}(key);
        std::string hashKey = to_string(h1);

        string file_name = key;

        ofstream outFile(key);
        if (!outFile) {
            throw "Failed file creation";
        }
        outFile<<solution;
        outFile.close();
    }

    string returnSolution(string problem) override {
        std::size_t h1 = std::hash<std::string>{}(problem);
        std::string hashKey = to_string(h1);
        string solution ="";
        ifstream file_input(hashKey);
        if (!file_input) {
            throw "Failed file opening";
        }
        string line;
        while (file_input >> line) {
            solution += line;
        }
        file_input.close();
        return solution;
    }

    bool isExist(string problem) override{
        std::size_t h1 = std::hash<std::string>{}(problem);
        std::string hashKey = to_string(h1);
        return this->cache_map.count(hashKey) != 0;
    }

};

#endif //APMS2_FILECACHEMANAGER_H
