#pragma once

#include <ZendCPP/ZendCPP.hpp>

EXTERN_C()
void php_driver_define_Time();
void php_driver_define_Date();
void php_driver_define_Timestamp();
void php_driver_define_Timeuuid();
END_EXTERN_C()

#include <functional>
#include <string>
#include <string_view>

zend_result scylladb_php_to_datetime_internal(
    zval* dst, const char* format, const std::function<int64_t()>& get_timestamp) noexcept;