TwinleafTown_MapScripts::
	.byte 0


TwinleafTown_Sign::
	lock
	msgbox TwinleafTown_Sign_Text_0
	setflag FLAG_ADVENTURE_STARTED
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_SYS_B_DASH
	release
	end


TwinleafTown_Sign_Text_0:
	.string "Fucker!$"
