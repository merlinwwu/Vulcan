/* Copyright (C) 2010-2019, The Regents of The University of Michigan.
 All rights reserved.

 This software was developed as part of the The Vulcan project in the Intelligent Robotics Lab
 under the direction of Benjamin Kuipers, kuipers@umich.edu. Use of this code is governed by an
 MIT-style License that can be found at "https://github.com/h2ssh/Vulcan".
*/


#ifndef LCMTYPES_MPEPC_METRIC_POSE_TARGET_STATUS_H
#define LCMTYPES_MPEPC_METRIC_POSE_TARGET_STATUS_H

#include <lcmtypes/vulcan_lcm/metric_pose_target_status_t.hpp>
#include <system/message_traits.h>

namespace vulcan
{
namespace system
{

template <>
struct message_traits<vulcan_lcm::metric_pose_target_status_t>
{
    using type = pure_lcm_message_tag;

    enum { num_channels = 1 };      ///< num_channels specifies the number of channels that exist for the type. The majority of messages
                                    ///< will have a single channel.

    /**
    * channelName retrieves the name for the channel at the provided index. The index must be in the range [0, num_channels) or the program
    * will fail with an assertion immediately.
    */
    static std::string channelName(int index)
    {
        return "METRIC_POSE_TARGET_STATUS";
    }
};

}
}

#endif // LCMTYPES_MPEPC_METRIC_POSE_TARGET_STATUS_H
