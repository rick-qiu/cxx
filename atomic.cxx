
#include <cstdio>

#include <atomic>
#include <iostream>

namespace cxx {

    namespace atomic {

        class Object {
            long long field1;
            long long field2;
        };
        void show_lock_free_attr() {
            std::printf("std::atomic_bool::is_lock_free():           %s\n", std::atomic_bool().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_char::is_lock_free():           %s\n", std::atomic_char().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_schar::is_lock_free():          %s\n", std::atomic_schar().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_uchar::is_lock_free():          %s\n", std::atomic_uchar().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_short::is_lock_free():          %s\n", std::atomic_short().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_ushort::is_lock_free():         %s\n", std::atomic_ushort().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_int::is_lock_free():            %s\n", std::atomic_int().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_uint::is_lock_free():           %s\n", std::atomic_uint().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_long::is_lock_free():           %s\n", std::atomic_long().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_ulong::is_lock_free():          %s\n", std::atomic_ulong().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_llong::is_lock_free():          %s\n", std::atomic_llong().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_ullong::is_lock_free():         %s\n", std::atomic_ullong().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_char16_t::is_lock_free():       %s\n", std::atomic_char16_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_char32_t::is_lock_free():       %s\n", std::atomic_char32_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_wchar_t::is_lock_free():        %s\n", std::atomic_wchar_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_int_least8_t::is_lock_free():   %s\n", std::atomic_int_least8_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_uint_least8_t::is_lock_free():  %s\n", std::atomic_uint_least8_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_int_least16_t::is_lock_free():  %s\n", std::atomic_int_least16_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_uint_least16_t::is_lock_free(): %s\n", std::atomic_uint_least16_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_int_least32_t::is_lock_free():  %s\n", std::atomic_int_least32_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_uint_least32_t::is_lock_free(): %s\n", std::atomic_uint_least32_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_int_least64_t::is_lock_free():  %s\n", std::atomic_int_least64_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_uint_least64_t::is_lock_free(): %s\n", std::atomic_uint_least64_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_int_fast8_t::is_lock_free():    %s\n", std::atomic_int_fast8_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_uint_fast8_t::is_lock_free():   %s\n", std::atomic_uint_fast8_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_int_fast16_t::is_lock_free():   %s\n", std::atomic_int_fast16_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_uint_fast16_t::is_lock_free():  %s\n", std::atomic_uint_fast16_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_int_fast32_t::is_lock_free():   %s\n", std::atomic_int_fast32_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_uint_fast32_t::is_lock_free():  %s\n", std::atomic_uint_fast32_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_int_fast64_t::is_lock_free():   %s\n", std::atomic_int_fast64_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_uint_fast64_t::is_lock_free():  %s\n", std::atomic_uint_fast64_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_intptr_t::is_lock_free():       %s\n", std::atomic_intptr_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_uintptr_t::is_lock_free():      %s\n", std::atomic_uintptr_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_size_t::is_lock_free():         %s\n", std::atomic_size_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_ptrdiff_t::is_lock_free():      %s\n", std::atomic_ptrdiff_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_intmax_t::is_lock_free():       %s\n", std::atomic_intmax_t().is_lock_free() ? "true" : "false");
            std::printf("std::atomic_uintmax_t::is_lock_free():      %s\n", std::atomic_uintmax_t().is_lock_free() ? "true" : "false");
            //std::printf("std::atomic<Object>::is_lock_free():        %s\n", std::atomic<Object>().is_lock_free() ? "true" : "false");
            std::printf("std::atomic<float>::is_lock_free():         %s\n", std::atomic<float>().is_lock_free() ? "true" : "false");
            std::printf("std::atomic<double>::is_lock_free():        %s\n", std::atomic<double>().is_lock_free() ? "true" : "false");
            //std::printf("std::atomic<long double>::is_lock_free():   %s\n", std::atomic<long double>().is_lock_free() ? "true" : "false");

        }
    }
}

int main(int argc, char *argv[]) {
    cxx::atomic::show_lock_free_attr();
    return 0;
}
