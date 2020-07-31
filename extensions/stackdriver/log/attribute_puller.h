#pragma once

#include <string>
#include <vector>
#include <map>

#include "extensions/common/context.h"
#include "extensions/stackdriver/log/exporter.h"
#include "google/logging/v2/logging.pb.h"

// Log Content import
#include "extensions/stackdriver/config/v1alpha1/stackdriver_plugin_config.pb.h"

namespace Extensions {
namespace Stackdriver {
namespace Log {

class AttributePuller {
public:
    std::string getAttribute(std::string attribute);

private:
    std::map<std::string, std::string> attr_cache_;
};


}  // namespace Log
}  // namespace Stackdriver
}  // namespace Extensions