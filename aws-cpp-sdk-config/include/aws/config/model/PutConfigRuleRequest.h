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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/config/model/ConfigRule.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class AWS_CONFIGSERVICE_API PutConfigRuleRequest : public ConfigServiceRequest
  {
  public:
    PutConfigRuleRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The rule that you want to add to your account.</p>
     */
    inline const ConfigRule& GetConfigRule() const{ return m_configRule; }

    /**
     * <p>The rule that you want to add to your account.</p>
     */
    inline void SetConfigRule(const ConfigRule& value) { m_configRuleHasBeenSet = true; m_configRule = value; }

    /**
     * <p>The rule that you want to add to your account.</p>
     */
    inline void SetConfigRule(ConfigRule&& value) { m_configRuleHasBeenSet = true; m_configRule = std::move(value); }

    /**
     * <p>The rule that you want to add to your account.</p>
     */
    inline PutConfigRuleRequest& WithConfigRule(const ConfigRule& value) { SetConfigRule(value); return *this;}

    /**
     * <p>The rule that you want to add to your account.</p>
     */
    inline PutConfigRuleRequest& WithConfigRule(ConfigRule&& value) { SetConfigRule(std::move(value)); return *this;}

  private:
    ConfigRule m_configRule;
    bool m_configRuleHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
