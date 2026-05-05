#include "agents.h"
#include <iostream>

// -------- Planner --------
vector<string> PlannerAgent::plan(const string& input) {
    vector<string> tasks;

    cout << "\n🧠 [Planner] 正在拆解任务...\n";

    if (input.find("学习") != string::npos) {
        tasks = {
            "制定学习计划",
            "拆分知识点",
            "安排复习"
        };
    }
    else if (input.find("项目") != string::npos) {
        tasks = {
            "分析需求",
            "设计结构",
            "实现代码"
        };
    }
    else {
        tasks = {
            "理解问题",
            "生成方案"
        };
    }

    return tasks;
}

// -------- Worker --------
string WorkerAgent::execute(const string& task) {
    cout << "⚙️ [Worker] 执行任务: " << task << endl;

    return "完成: " + task;
}

// -------- Review --------
string ReviewAgent::review(const vector<string>& results) {
    cout << "\n📊 [Review] 正在汇总结果...\n";

    string summary = "最终报告：\n";

    for (auto& r : results) {
        summary += "- " + r + "\n";
    }

    summary += "\n✅ 任务全部完成";

    return summary;
}
