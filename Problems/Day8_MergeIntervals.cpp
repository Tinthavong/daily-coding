#include <iostream>
#include <vector>
#include <algorithm>

struct Interval {
    int start;
    int end;

    Interval(int s, int e) : start(s), end(e) {}
};

class Day8 {
public:

static std::vector<Interval> mergeIntervals(std::vector<Interval>& intervals) {
    std::vector<Interval> mergedIntervals;

    if (intervals.empty()) {
        return mergedIntervals;
    }

    std::vector<Interval> sortedIntervals = intervals;
    std::sort(sortedIntervals.begin(), sortedIntervals.end(), [](const Interval& a, const Interval& b) {
        return a.start < b.start;
    });

    // Merge overlapping intervals
    mergedIntervals.push_back(sortedIntervals[0]);

    for (int i = 1; i < sortedIntervals.size(); ++i) {
        Interval currentInterval = sortedIntervals[i];
        Interval& previousInterval = mergedIntervals.back();

        if (currentInterval.start <= previousInterval.end) {
            previousInterval.end = std::max(previousInterval.end, currentInterval.end);
        } else {
            mergedIntervals.push_back(currentInterval);
        }
    }

    return mergedIntervals;
    }
};

int main() {

    std::vector<Interval> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    std::cout << "Given intervals: ";
    for (const Interval& interval : intervals) {
        std::cout << "(" << interval.start << ", " << interval.end << ") ";
    }
    std::cout << std::endl;

    std::vector<Interval> merged = Day8::mergeIntervals(intervals);

    std::cout << "Merged intervals: ";
    for (const Interval& interval : merged) {
        std::cout << "(" << interval.start << ", " << interval.end << ") ";
    }
    std::cout << std::endl;

    return 0;
}