#pragma once

#include <redis3m/utils/common.h>
#include <string>
#include <vector>

namespace resolv
{
   REDIS3M_EXCEPTION(cannot_resolve_hostname)
   std::vector<std::string> get_addresses(const std::string &hostname);
}
