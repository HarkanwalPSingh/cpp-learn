// Copyright (c) 2024 Harkanwal P Singh. All rights reserved.

#include <cstddef>
#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>&);

void addAnagram(unordered_map<string, vector<string>>&, string);

int main() {

  vector<string> testInput = vector<string>
  {"eat","tea","tan","ate","nat","bat","ac","bd","aac","bbd","aacc","bbdd","acc","bdd"};

  vector<vector<string>> anagrams {groupAnagrams(testInput)};

  for (vector<string> group: anagrams) {
    cout << "Group: ";
    for (string anagram: group) {
      cout << anagram << " ";
    }
    cout << '\n';
  }

  priority_queue<pair<int, int>, vector<class Tp>>

  return 0;
}

vector<vector<string>> groupAnagrams(vector<string>& strs) {
  unordered_map<string, vector<string>> anagramMap;
  for (string str: strs) {
    addAnagram(anagramMap, str);
  }

  vector<vector<string>> result;
  for (auto i = anagramMap.begin(); i != anagramMap.end(); i++) {
    result.push_back(i->second);
  }
  return result;
}

void addAnagram(unordered_map<string, vector<string>>& anagramMap, string anagram) {
  vector<int> charCounter = vector<int>(26, 0);
  string key; // 3a2b1c

  for (char c: anagram) {
    charCounter[c - 'a']++;
  }

  for (size_t i = 0; i < charCounter.size(); ++i) {
    if (charCounter[i] != 0) {
      key += to_string(charCounter[i]) + static_cast<char>(i + 'a');
    }
  }

  // cout << "Key for anagram " << anagram << " is " << key << '\n';

  anagramMap[key].push_back(anagram);
}
