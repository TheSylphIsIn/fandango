NewMap1_MapScripts::
	.byte 0
	

ActivateSurf::
	finditem ITEM_HM03
	setflag FLAG_BADGE05_GET
	end

SurfDashing::
	setflag FLAG_SYS_B_DASH_WATER
	msgbox CanSurf, MSGBOX_NPC
	end
	
CanSurf:
	.string "Press B to dash.$"