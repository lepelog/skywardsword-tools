void entrypoint_510_01() {
	start()
	printf("This is the #####Windmill Propeller #####you\nwere searching for.\n\n\nIt is now possible to retrieve this using\nthe robot whose services we have\nenlisted.\n\nWould you like me to call the robot?\n#####Yes.#####No.")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 0)])) {
	  case 0:
		printf("I will send word to the robot using\ntelepathic transmission, ######Master.")
	  case 1:
		printf("Yes, ######Master. If you change your mind\nand wish to retrieve it, please examine\nit again.")
	}
}

void entrypoint_510_02() {
	start()
	printf("#####dMistress Fi! I hope you weren't waiting\nlong, bzzzt!\n\n\nSo, zrrrbt, you want me to carry this?!")
}

void entrypoint_510_03() {
	start()
	printf("#####dI'll be waiting for you up in the sky,\nso don't take too long, vrrrt!")
}

void entrypoint_510_04() {
	start()
	printf("######Master, I suggest that we also return to\nthe sky and collect the propeller as\nsoon as possible.")
	story_flags[668 0x029C] = false;
	story_flags[324 0x0144] = true;
	story_flags[818 0x0332] = false;
	story_flags[186 0x00BA] = false;
	story_flags[365 0x016D] = false;
	story_flags[397 0x018D] = false;
	story_flags[471 0x01D7] = false;
	story_flags[480 0x01E0] = false;
	story_flags[372 0x0174] = false;
	story_flags[366 0x016E] = false;
	story_flags[1108 0x0454] = true;
}

void entrypoint_510_05() {
	start()
	printf("#####dHey! Master Shortpants! You're in my\nway here, zrrpt! I said, get out of the\nway, vrrrrrt!")
}

