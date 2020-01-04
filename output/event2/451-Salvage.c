void entrypoint_451_01() {
	start()
	printf("I have identified the item that the...\nhighly unusual man on Fun Fun Island\nsays was lost.\n\nWe can call the Scrap Shop robot to\ncome and retrieve it. Would you like \nme to call the robot?\n#####Yes!#####No, thanks.")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 0)])) {
	  case 0:
		printf("######Master, I will send word to the robot\nusing telepathic transmission.")
	  case 1:
		printf("Yes, ######Master. If you change your mind\nand decide to retrieve it, please\nexamine it again.")
	}
}

void entrypoint_451_02() {
	start()
	printf("#####dMistress Fi, zrrpt! You called?\n\n\n\nWhoa, zrrft... This place seems\nstrangely familiar, brrzrrt...\n\n\nBzzzt, so you want me to carry this\nthing?")
}

void entrypoint_451_03() {
	start()
	printf("#####dI'll be waiting for you in the sky,\nso don't take too long, vrrt!")
}

void entrypoint_451_04() {
	start()
	printf("######Master, I suggest that we head back to\nthe sky and return this party wheel to\nits owner as soon as possible.")
	story_flags[682 0x02AA] = false;
	story_flags[397 0x018D] = true;
	story_flags[324 0x0144] = false;
	story_flags[186 0x00BA] = false;
	story_flags[365 0x016D] = false;
	story_flags[471 0x01D7] = false;
	story_flags[480 0x01E0] = false;
	story_flags[372 0x0174] = false;
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 721), ('next', 22), ('param3', 52)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 722), ('next', 24), ('param3', 52)])
	story_flags[743 0x02E7] = false;
	story_flags[366 0x016E] = false;
}

void entrypoint_451_05() {
	start()
	printf("#####dOK, OK, zrrft... You just sit tight\nthere and stay out of my way,\nMaster Shortpants, bzzzt!")
}

void entrypoint_451_06() {
	start()
	printf("I have identified the item that the\nunusual man on Fun Fun Island says\nwas lost.\n\nUnder usual circumstances, we could\ncall the Scrap Shop robot to come and\nretrieve it.\n\nHowever, the robot is currently\ncarrying out some duties at Eldin\nVolcano, so we cannot call him here.\n\nI recommend returning to Eldin\nVolcano and verifying the status\nof the robot.")
}

