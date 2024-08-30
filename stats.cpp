#include "stats.h"
#include <numeric>
#include <algorithm>
#include <math.h>

namespace Statistics
{
    Stats ComputeStatistics(const std::vector<float>& numList)
    {
        Stats stats = { NAN, NAN, NAN };

        if (numList.empty())
        {
            return stats;
        }

        stats.average = std::accumulate(numList.begin(), numList.end(), 0.0) / numList.size();
        stats.max = *std::max_element(numList.begin(), numList.end());
        stats.min = *std::min_element(numList.begin(), numList.end());
        return stats;
    }
}