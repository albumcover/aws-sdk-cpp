/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{
  /*
    <p>Describes whether instance monitoring is enabled.</p>
  */
  class AWS_AUTOSCALING_API InstanceMonitoring
  {
  public:
    InstanceMonitoring();
    InstanceMonitoring(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceMonitoring& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     <p>If <code>True</code>, instance monitoring is enabled.</p>
    */
    inline bool GetEnabled() const{ return m_enabled; }

    /*
     <p>If <code>True</code>, instance monitoring is enabled.</p>
    */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /*
     <p>If <code>True</code>, instance monitoring is enabled.</p>
    */
    inline InstanceMonitoring& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:
    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws