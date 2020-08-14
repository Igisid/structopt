
#pragma once
#include <optional>
#include <structopt/visitor.hpp>

namespace structopt {

struct sub_command {
  std::string structopt_sub_command__name__{""};
  std::optional<bool> structopt_sub_command__invoked__;
  details::visitor structopt_sub_command__visitor__;

  bool has_value() const {
    return structopt_sub_command__invoked__.has_value();
  }

};

}