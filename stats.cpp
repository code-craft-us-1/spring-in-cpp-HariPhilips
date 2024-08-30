#include "stats.h"
#include <numeric>

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& numList)
{
    Statistics::Stats stats = { NAN, NAN, NAN };

    if (numList.empty())
    {
        return stats;
    }

    stats.average = std::accumulate(numList.begin(), numList.end(), 0.0) / numList.size();
    stats.max = *std::max_element(numbers.begin(), numbers.end());
    stats.min = *std::min_element(numbers.begin(), numbers.end());
    return stats;
}
