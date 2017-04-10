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
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/Handshake.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Organizations
{
namespace Model
{
  class AWS_ORGANIZATIONS_API ListHandshakesForAccountResult
  {
  public:
    ListHandshakesForAccountResult();
    ListHandshakesForAccountResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListHandshakesForAccountResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A list of <a>Handshake</a> objects with details about each of the handshakes
     * that is associated with the specified account.</p>
     */
    inline const Aws::Vector<Handshake>& GetHandshakes() const{ return m_handshakes; }

    /**
     * <p>A list of <a>Handshake</a> objects with details about each of the handshakes
     * that is associated with the specified account.</p>
     */
    inline void SetHandshakes(const Aws::Vector<Handshake>& value) { m_handshakes = value; }

    /**
     * <p>A list of <a>Handshake</a> objects with details about each of the handshakes
     * that is associated with the specified account.</p>
     */
    inline void SetHandshakes(Aws::Vector<Handshake>&& value) { m_handshakes = std::move(value); }

    /**
     * <p>A list of <a>Handshake</a> objects with details about each of the handshakes
     * that is associated with the specified account.</p>
     */
    inline ListHandshakesForAccountResult& WithHandshakes(const Aws::Vector<Handshake>& value) { SetHandshakes(value); return *this;}

    /**
     * <p>A list of <a>Handshake</a> objects with details about each of the handshakes
     * that is associated with the specified account.</p>
     */
    inline ListHandshakesForAccountResult& WithHandshakes(Aws::Vector<Handshake>&& value) { SetHandshakes(std::move(value)); return *this;}

    /**
     * <p>A list of <a>Handshake</a> objects with details about each of the handshakes
     * that is associated with the specified account.</p>
     */
    inline ListHandshakesForAccountResult& AddHandshakes(const Handshake& value) { m_handshakes.push_back(value); return *this; }

    /**
     * <p>A list of <a>Handshake</a> objects with details about each of the handshakes
     * that is associated with the specified account.</p>
     */
    inline ListHandshakesForAccountResult& AddHandshakes(Handshake&& value) { m_handshakes.push_back(std::move(value)); return *this; }

    /**
     * <p>If present, this value indicates that there is more output available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present, this value indicates that there is more output available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present, this value indicates that there is more output available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present, this value indicates that there is more output available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present, this value indicates that there is more output available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>.</p>
     */
    inline ListHandshakesForAccountResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, this value indicates that there is more output available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>.</p>
     */
    inline ListHandshakesForAccountResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, this value indicates that there is more output available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>.</p>
     */
    inline ListHandshakesForAccountResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Handshake> m_handshakes;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
