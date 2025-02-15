//------------------------------------------------------------------------------
//Copyright Robert Pelloni.
//All Rights Reserved.
//------------------------------------------------------------------------------


#pragma once
#include "oktypes.h"
#include "src/Engine/state/StateManager.h"
class Logger;




class ND : public MenuPanel
{
public:

	static Logger log;


	sp<OKTexture> texture = nullptr;

	float nDDrawAlpha = 1.0f;
	float nDZoom = 0.01f;


	float widthTextureAspectRatio = 0;
	float heightTextureAspectRatio = 0;
	float widthToHeightRatio = 0;


	float widthThisFrame = 0;
	float targetWidth = 0;


	


	sp<StateManager> nDGameStateManager = nullptr;


	sp<Light> light = nullptr;
	float lightAlpha = 1.0f;
	bool lightFadeInOutToggle = false;

	float lightFadeSpeedMult = 0.0005f;
	float lightMaxAlpha = 0.75f;
	float lightMinAlpha = 0.70f;


	sp<ConsoleText> ndZoomText = nullptr;// = Console::debug("ndZoomText");


	long long fadeOutMeshTicks = 0;
	int fadeOutMeshTicksSpeed = 2000;
	bool fadeMesh = true;
	float drawMeshAlpha = 0.5f;


	ND();


	void init();


	virtual void update() override;


	void setGame(sp<NDGameEngine> game);

	sp<NDGameEngine> getGame();


	virtual void toggleActivated() override;


	virtual void setActivated(bool b) override;


	virtual void onScrolledUp() override;


	virtual void scrollUp() override; //zoomIn()


	virtual void scrollDown() override; //zoomOut()





	virtual void render() override;


	virtual void layout() override;
};

