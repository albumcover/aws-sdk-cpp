﻿/*
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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/CloudWatchEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/events/model/Target.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHEVENTS_API PutTargetsRequest : public CloudWatchEventsRequest
  {
  public:
    PutTargetsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline const Aws::String& GetRule() const{ return m_rule; }

    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline void SetRule(const Aws::String& value) { m_ruleHasBeenSet = true; m_rule = value; }

    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline void SetRule(Aws::String&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }

    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline void SetRule(const char* value) { m_ruleHasBeenSet = true; m_rule.assign(value); }

    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline PutTargetsRequest& WithRule(const Aws::String& value) { SetRule(value); return *this;}

    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline PutTargetsRequest& WithRule(Aws::String&& value) { SetRule(std::move(value)); return *this;}

    /**
     * <zonbook> <simpara>The name of the rule.</simpara> </zonbook> <xhtml> <p>The
     * name of the rule.</p> </xhtml>
     */
    inline PutTargetsRequest& WithRule(const char* value) { SetRule(value); return *this;}

    /**
     * <zonbook> <simpara>The targets to update or add to the rule.</simpara>
     * </zonbook> <xhtml> <p>The targets to update or add to the rule.</p> </xhtml>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <zonbook> <simpara>The targets to update or add to the rule.</simpara>
     * </zonbook> <xhtml> <p>The targets to update or add to the rule.</p> </xhtml>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <zonbook> <simpara>The targets to update or add to the rule.</simpara>
     * </zonbook> <xhtml> <p>The targets to update or add to the rule.</p> </xhtml>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <zonbook> <simpara>The targets to update or add to the rule.</simpara>
     * </zonbook> <xhtml> <p>The targets to update or add to the rule.</p> </xhtml>
     */
    inline PutTargetsRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <zonbook> <simpara>The targets to update or add to the rule.</simpara>
     * </zonbook> <xhtml> <p>The targets to update or add to the rule.</p> </xhtml>
     */
    inline PutTargetsRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <zonbook> <simpara>The targets to update or add to the rule.</simpara>
     * </zonbook> <xhtml> <p>The targets to update or add to the rule.</p> </xhtml>
     */
    inline PutTargetsRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <zonbook> <simpara>The targets to update or add to the rule.</simpara>
     * </zonbook> <xhtml> <p>The targets to update or add to the rule.</p> </xhtml>
     */
    inline PutTargetsRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }

  private:
    Aws::String m_rule;
    bool m_ruleHasBeenSet;
    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
