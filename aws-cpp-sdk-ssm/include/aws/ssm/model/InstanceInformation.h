/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PingStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/PlatformType.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes a filter for a specific list of instances. </p>
   */
  class AWS_SSM_API InstanceInformation
  {
  public:
    InstanceInformation();
    InstanceInformation(const Aws::Utils::Json::JsonValue& jsonValue);
    InstanceInformation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The instance ID. </p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID. </p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID. </p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID. </p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID. </p>
     */
    inline InstanceInformation& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID. </p>
     */
    inline InstanceInformation& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID. </p>
     */
    inline InstanceInformation& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>Connection status of the SSM agent. </p>
     */
    inline const PingStatus& GetPingStatus() const{ return m_pingStatus; }

    /**
     * <p>Connection status of the SSM agent. </p>
     */
    inline void SetPingStatus(const PingStatus& value) { m_pingStatusHasBeenSet = true; m_pingStatus = value; }

    /**
     * <p>Connection status of the SSM agent. </p>
     */
    inline void SetPingStatus(PingStatus&& value) { m_pingStatusHasBeenSet = true; m_pingStatus = value; }

    /**
     * <p>Connection status of the SSM agent. </p>
     */
    inline InstanceInformation& WithPingStatus(const PingStatus& value) { SetPingStatus(value); return *this;}

    /**
     * <p>Connection status of the SSM agent. </p>
     */
    inline InstanceInformation& WithPingStatus(PingStatus&& value) { SetPingStatus(value); return *this;}

    /**
     * <p>The date and time when agent last pinged SSM service. </p>
     */
    inline const Aws::Utils::DateTime& GetLastPingDateTime() const{ return m_lastPingDateTime; }

    /**
     * <p>The date and time when agent last pinged SSM service. </p>
     */
    inline void SetLastPingDateTime(const Aws::Utils::DateTime& value) { m_lastPingDateTimeHasBeenSet = true; m_lastPingDateTime = value; }

    /**
     * <p>The date and time when agent last pinged SSM service. </p>
     */
    inline void SetLastPingDateTime(Aws::Utils::DateTime&& value) { m_lastPingDateTimeHasBeenSet = true; m_lastPingDateTime = value; }

    /**
     * <p>The date and time when agent last pinged SSM service. </p>
     */
    inline InstanceInformation& WithLastPingDateTime(const Aws::Utils::DateTime& value) { SetLastPingDateTime(value); return *this;}

    /**
     * <p>The date and time when agent last pinged SSM service. </p>
     */
    inline InstanceInformation& WithLastPingDateTime(Aws::Utils::DateTime&& value) { SetLastPingDateTime(value); return *this;}

    /**
     * <p>The version of the SSM agent running on your instance. </p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>The version of the SSM agent running on your instance. </p>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>The version of the SSM agent running on your instance. </p>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>The version of the SSM agent running on your instance. </p>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>The version of the SSM agent running on your instance. </p>
     */
    inline InstanceInformation& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>The version of the SSM agent running on your instance. </p>
     */
    inline InstanceInformation& WithAgentVersion(Aws::String&& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>The version of the SSM agent running on your instance. </p>
     */
    inline InstanceInformation& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}

    /**
     * <p>Indicates whether latest version of the SSM agent is running on your
     * instance. </p>
     */
    inline bool GetIsLatestVersion() const{ return m_isLatestVersion; }

    /**
     * <p>Indicates whether latest version of the SSM agent is running on your
     * instance. </p>
     */
    inline void SetIsLatestVersion(bool value) { m_isLatestVersionHasBeenSet = true; m_isLatestVersion = value; }

    /**
     * <p>Indicates whether latest version of the SSM agent is running on your
     * instance. </p>
     */
    inline InstanceInformation& WithIsLatestVersion(bool value) { SetIsLatestVersion(value); return *this;}

    /**
     * <p>The operating system platform type. </p>
     */
    inline const PlatformType& GetPlatformType() const{ return m_platformType; }

    /**
     * <p>The operating system platform type. </p>
     */
    inline void SetPlatformType(const PlatformType& value) { m_platformTypeHasBeenSet = true; m_platformType = value; }

    /**
     * <p>The operating system platform type. </p>
     */
    inline void SetPlatformType(PlatformType&& value) { m_platformTypeHasBeenSet = true; m_platformType = value; }

    /**
     * <p>The operating system platform type. </p>
     */
    inline InstanceInformation& WithPlatformType(const PlatformType& value) { SetPlatformType(value); return *this;}

    /**
     * <p>The operating system platform type. </p>
     */
    inline InstanceInformation& WithPlatformType(PlatformType&& value) { SetPlatformType(value); return *this;}

    /**
     * <p>The name of the operating system platform running on your instance. </p>
     */
    inline const Aws::String& GetPlatformName() const{ return m_platformName; }

    /**
     * <p>The name of the operating system platform running on your instance. </p>
     */
    inline void SetPlatformName(const Aws::String& value) { m_platformNameHasBeenSet = true; m_platformName = value; }

    /**
     * <p>The name of the operating system platform running on your instance. </p>
     */
    inline void SetPlatformName(Aws::String&& value) { m_platformNameHasBeenSet = true; m_platformName = value; }

    /**
     * <p>The name of the operating system platform running on your instance. </p>
     */
    inline void SetPlatformName(const char* value) { m_platformNameHasBeenSet = true; m_platformName.assign(value); }

    /**
     * <p>The name of the operating system platform running on your instance. </p>
     */
    inline InstanceInformation& WithPlatformName(const Aws::String& value) { SetPlatformName(value); return *this;}

    /**
     * <p>The name of the operating system platform running on your instance. </p>
     */
    inline InstanceInformation& WithPlatformName(Aws::String&& value) { SetPlatformName(value); return *this;}

    /**
     * <p>The name of the operating system platform running on your instance. </p>
     */
    inline InstanceInformation& WithPlatformName(const char* value) { SetPlatformName(value); return *this;}

    /**
     * <p>The version of the OS platform running on your instance. </p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }

    /**
     * <p>The version of the OS platform running on your instance. </p>
     */
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

    /**
     * <p>The version of the OS platform running on your instance. </p>
     */
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

    /**
     * <p>The version of the OS platform running on your instance. </p>
     */
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }

    /**
     * <p>The version of the OS platform running on your instance. </p>
     */
    inline InstanceInformation& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}

    /**
     * <p>The version of the OS platform running on your instance. </p>
     */
    inline InstanceInformation& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(value); return *this;}

    /**
     * <p>The version of the OS platform running on your instance. </p>
     */
    inline InstanceInformation& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}

  private:
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    PingStatus m_pingStatus;
    bool m_pingStatusHasBeenSet;
    Aws::Utils::DateTime m_lastPingDateTime;
    bool m_lastPingDateTimeHasBeenSet;
    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet;
    bool m_isLatestVersion;
    bool m_isLatestVersionHasBeenSet;
    PlatformType m_platformType;
    bool m_platformTypeHasBeenSet;
    Aws::String m_platformName;
    bool m_platformNameHasBeenSet;
    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
