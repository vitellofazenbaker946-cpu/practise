#pragma once
#pragma once
#include <string>
#include <vector>
using namespace std;

class PlannerAgent {
public:
    vector<string> plan(const string& input);
};

class WorkerAgent {
public:
    string execute(const string& task);
};

class ReviewAgent {
public:
    string review(const vector<string>& results);
};
