#pragma once

#include <utility>
#include "easy/concepts.h"

namespace easy
{
    // in_open_range is "strictly between" (lo < t < hi) or (lo, hi)
    template <easy::standard_integer T,
              easy::standard_integer R1,
              easy::standard_integer R2>
    constexpr bool in_open_range(const T t, const R1 lo, const R2 hi) noexcept
    {
        return std::cmp_less(lo, t) && std::cmp_less(t, hi);
    }

    // in_half_open_range (lo <= t < hi) or [lo, hi)
    template <easy::standard_integer T,
              easy::standard_integer R1,
              easy::standard_integer R2>
    constexpr bool in_half_open_range(const T t,
                                      const R1 lo,
                                      const R2 hi) noexcept
    {
        return std::cmp_less_equal(lo, t) && std::cmp_less(t, hi);
    }

    // in_closed_range is "between" (lo <= t <= hi) or [lo, hi]
    template <easy::standard_integer T,
              easy::standard_integer R1,
              easy::standard_integer R2>
    constexpr bool in_closed_range(const T t, const R1 lo, const R2 hi) noexcept
    {
        return std::cmp_less_equal(lo, t) && std::cmp_less_equal(t, hi);
    }
}
