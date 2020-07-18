#pragma once
#ifndef __PATH_NODE__
#define __PATH_NODE__

#include"GameObject.h"

class PathNode : GameObject
{
public:
	PathNode();
	~PathNode();

	//Life Cycle Functions 
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;	
	
	void setLOS(bool LOS);
	bool getLOS();

private:
	bool m_bLOS;
};


#endif / * defined(__PATH_NODE__)*/