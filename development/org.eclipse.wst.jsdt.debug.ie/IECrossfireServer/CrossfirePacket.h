/*******************************************************************************
 * Copyright (c) 2011 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     IBM Corporation - initial API and implementation
 *******************************************************************************/


#pragma once

#include <string>

class CrossfirePacket {

public:
	CrossfirePacket();
	~CrossfirePacket();
	virtual void clone(CrossfirePacket** _value) = 0;
	virtual std::wstring* getContextId();
	virtual wchar_t* getName();
	virtual unsigned int getSeq();
	virtual int getType() = 0;
	virtual void setContextId(std::wstring* value);
	virtual void setName(const wchar_t* value);
	virtual void setSeq(unsigned int);

	enum {
		TYPE_REQUEST,
		TYPE_RESPONSE,
		TYPE_EVENT
	};

private:
	std::wstring* m_contextId;
	wchar_t* m_name;
	unsigned int m_seq;
};