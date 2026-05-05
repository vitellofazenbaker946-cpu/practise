#include <iostream>
#include <vector>
#include "agents.h"
using namespace std;

int main() {
    PlannerAgent planner;
    WorkerAgent worker;
    ReviewAgent reviewer;

    cout << "=== Multi-Agent Collaboration System ===" << endl;

    while (true) {
        string input;
        cout << "\n请输入任务（exit退出）: ";
        getline(cin, input);

        if (input == "exit") break;

        // 1️⃣ Planner拆解
        vector<string> tasks = planner.plan(input);

        // 2️⃣ Worker执行
        vector<string> results;

        for (auto& task : tasks) {
            string res = worker.execute(task);
            results.push_back(res);
        }

        // 3️⃣ Review总结
        string final_report = reviewer.review(results);

        cout << "\n====================\n";
        cout << final_report << endl;
        cout << "====================\n";
    }

    return 0;
}
