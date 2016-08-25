/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Tencent is pleased to support the open source community by making behaviac available.
//
// Copyright (C) 2015 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with
// the License. You may obtain a copy of the License at http://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and limitations under the License.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "AgentArrayAccessTest.h"

namespace TestNS
{
	AgentArrayAccessTest::AgentArrayAccessTest()
	{
		Int = 0;
	}

	AgentArrayAccessTest::~AgentArrayAccessTest()
	{
	}

	BEHAVIAC_BEGIN_PROPERTIES(AgentArrayAccessTest)
	{
		//BEHAVIAC_CLASS_DISPLAYNAME(L"AgentArrayAccessTest DisplayName")
		//BEHAVIAC_CLASS_DESC(L"AgentArrayAccessTest Desc")
		BEHAVIAC_REGISTER_PROPERTY(ListInts);
		BEHAVIAC_REGISTER_PROPERTY(Int);
	}
	BEHAVIAC_END_PROPERTIES()
}