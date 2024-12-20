#include <catch2/catch_test_macros.hpp>
#include "caff/type_list.h"
    
TEST_CASE("standard_character_types", "[type_list]")
{
    using T = caff::standard_character_types;

    static_assert(std::tuple_size_v<T> == 5);
    static_assert(std::is_same_v<std::tuple_element_t<0,T>, char>);
    static_assert(std::is_same_v<std::tuple_element_t<1,T>, wchar_t>);
    static_assert(std::is_same_v<std::tuple_element_t<2,T>, char8_t>);
    static_assert(std::is_same_v<std::tuple_element_t<3,T>, char16_t>);
    static_assert(std::is_same_v<std::tuple_element_t<4,T>, char32_t>);

    CHECK(true);
}

TEST_CASE("signed_integer_types", "[type_list]")
{
    using T = caff::signed_integer_types;

    static_assert(std::tuple_size_v<T> == 4);
    static_assert(std::is_same_v<std::tuple_element_t<0,T>, short>);
    static_assert(std::is_same_v<std::tuple_element_t<1,T>, int>);
    static_assert(std::is_same_v<std::tuple_element_t<2,T>, long>);
    static_assert(std::is_same_v<std::tuple_element_t<3,T>, long long>);

    CHECK(true);
}

TEST_CASE("unsigned_integer_types", "[type_list]")
{
    using T = caff::unsigned_integer_types;

    static_assert(std::tuple_size_v<T> == 4);
    static_assert(std::is_same_v<std::tuple_element_t<0,T>, unsigned short>);
    static_assert(std::is_same_v<std::tuple_element_t<1,T>, unsigned int>);
    static_assert(std::is_same_v<std::tuple_element_t<2,T>, unsigned long>);
    static_assert(std::is_same_v<std::tuple_element_t<3,T>, unsigned long long>);

    CHECK(true);
}

TEST_CASE("integer_types", "[type_list]")
{
    using T = caff::integer_types;

    static_assert(std::tuple_size_v<T> == 8);
    static_assert(std::is_same_v<std::tuple_element_t<0,T>, short>);
    static_assert(std::is_same_v<std::tuple_element_t<1,T>, int>);
    static_assert(std::is_same_v<std::tuple_element_t<2,T>, long>);
    static_assert(std::is_same_v<std::tuple_element_t<3,T>, long long>);
    static_assert(std::is_same_v<std::tuple_element_t<4,T>, unsigned short>);
    static_assert(std::is_same_v<std::tuple_element_t<5,T>, unsigned int>);
    static_assert(std::is_same_v<std::tuple_element_t<6,T>, unsigned long>);
    static_assert(std::is_same_v<std::tuple_element_t<7,T>, unsigned long long>);

    CHECK(true);
}

TEST_CASE("signed_standard_integer_types", "[type_list]")
{
    using T = caff::signed_standard_integer_types;

    static_assert(std::tuple_size_v<T> == 5);
    static_assert(std::is_same_v<std::tuple_element_t<0,T>, signed char>);
    static_assert(std::is_same_v<std::tuple_element_t<1,T>, short>);
    static_assert(std::is_same_v<std::tuple_element_t<2,T>, int>);
    static_assert(std::is_same_v<std::tuple_element_t<3,T>, long>);
    static_assert(std::is_same_v<std::tuple_element_t<4,T>, long long>);

    CHECK(true);
}

TEST_CASE("unsigned_standard_integer_types", "[type_list]")
{
    using T = caff::unsigned_standard_integer_types;

    static_assert(std::tuple_size_v<T> == 5);
    static_assert(std::is_same_v<std::tuple_element_t<0,T>, unsigned char>);
    static_assert(std::is_same_v<std::tuple_element_t<1,T>, unsigned short>);
    static_assert(std::is_same_v<std::tuple_element_t<2,T>, unsigned int>);
    static_assert(std::is_same_v<std::tuple_element_t<3,T>, unsigned long>);
    static_assert(std::is_same_v<std::tuple_element_t<4,T>, unsigned long long>);

    CHECK(true);
}

TEST_CASE("standard_integer_types", "[type_list]")
{
    using T = caff::standard_integer_types;

    static_assert(std::tuple_size_v<T> == 10);
    static_assert(std::is_same_v<std::tuple_element_t<0,T>, signed char>);
    static_assert(std::is_same_v<std::tuple_element_t<1,T>, short>);
    static_assert(std::is_same_v<std::tuple_element_t<2,T>, int>);
    static_assert(std::is_same_v<std::tuple_element_t<3,T>, long>);
    static_assert(std::is_same_v<std::tuple_element_t<4,T>, long long>);
    static_assert(std::is_same_v<std::tuple_element_t<5,T>, unsigned char>);
    static_assert(std::is_same_v<std::tuple_element_t<6,T>, unsigned short>);
    static_assert(std::is_same_v<std::tuple_element_t<7,T>, unsigned int>);
    static_assert(std::is_same_v<std::tuple_element_t<8,T>, unsigned long>);
    static_assert(std::is_same_v<std::tuple_element_t<9,T>, unsigned long long>);

    CHECK(true);
}

TEST_CASE("integral_types", "[type_list]")
{
    using T = caff::integral_types;

    static_assert(std::tuple_size_v<T> == 16);
    static_assert(std::is_same_v<std::tuple_element_t<0,T>, bool>);
    static_assert(std::is_same_v<std::tuple_element_t<1,T>, char>);
    static_assert(std::is_same_v<std::tuple_element_t<2,T>, wchar_t>);
    static_assert(std::is_same_v<std::tuple_element_t<3,T>, char8_t>);
    static_assert(std::is_same_v<std::tuple_element_t<4,T>, char16_t>);
    static_assert(std::is_same_v<std::tuple_element_t<5,T>, char32_t>);
    static_assert(std::is_same_v<std::tuple_element_t<6,T>, signed char>);
    static_assert(std::is_same_v<std::tuple_element_t<7,T>, short>);
    static_assert(std::is_same_v<std::tuple_element_t<8,T>, int>);
    static_assert(std::is_same_v<std::tuple_element_t<9,T>, long>);
    static_assert(std::is_same_v<std::tuple_element_t<10,T>, long long>);
    static_assert(std::is_same_v<std::tuple_element_t<11,T>, unsigned char>);
    static_assert(std::is_same_v<std::tuple_element_t<12,T>, unsigned short>);
    static_assert(std::is_same_v<std::tuple_element_t<13,T>, unsigned int>);
    static_assert(std::is_same_v<std::tuple_element_t<14,T>, unsigned long>);
    static_assert(std::is_same_v<std::tuple_element_t<15,T>, unsigned long long>);

    CHECK(true);
}

TEST_CASE("standard_floating_point_types", "[type_list]")
{
    using T = caff::standard_floating_point_types;

    static_assert(std::tuple_size_v<T> == 3);
    static_assert(std::is_same_v<std::tuple_element_t<0,T>, float>);
    static_assert(std::is_same_v<std::tuple_element_t<1,T>, double>);
    static_assert(std::is_same_v<std::tuple_element_t<2,T>, long double>);
    
    CHECK(true);
}
