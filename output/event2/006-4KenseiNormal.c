void entrypoint_006_400() {
	start()
	switch (story_flags[182 0x00B6]) {
	  case 0:
		switch (story_flags[108 0x006C]) {
		  case 0:
			printf("Your hearts have decreased quite\ndramatically. Replenish some of\nyour life at the earliest opportunity.######")
		  case 1:
			printf("Your hearts have decreased quite\ndramatically. Replenish some of\nyour life at the earliest opportunity.\n\nTo ensure that you are able to find\nmore #####hearts##### when you need them,\nthey are now available as a target\nfor your #####dowsing #####ability.######")
			story_flags[108 0x006C] = true;
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 11), ('next', 8), ('param3', 56)])
			printf("Hold ##### and choose #####hearts #####from\nthe circle of objects to set them as\nyour current target. ##### This capability\nshould prove to be quite useful.")
			switch (story_flags[226 0x00E2]) {
			  case 0:
				printf("You have elected to engage\n#####Hero Mode#####, so hearts and heart\nflowers will not appear.\n\nHowever, if you choose to carry the\n#########d#####, then ######hearts\nand heart flowers do #####have a chance\nof appearing#####.")
			  case 1:
			}
		}
	  case 1:
		printf("Your hearts have decreased quite\ndramatically. Replenish some of\nyour life at the earliest opportunity.######")
	}
}

void entrypoint_006_401() {
	start()
	printf("Your hearts have decreased quite\ndramatically. Replenish some of\nyour life at the earliest opportunity.######")
}

void entrypoint_006_402() {
	start()
	switch (story_flags[226 0x00E2]) {
	  case 0:
		switch (story_flags[841 0x0349]) {
		  case 0:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 8), ('param3', 19), ('param4', 2), ('param5', 10)])) {
			  case 0:
			  case 1:
				flw_11:
				printf("You have elected to engage\n#####Hero Mode#####, so hearts and heart\nflowers will not appear. I recommend\nutilizing potions.")
			}
		  case 1:
			goto flw_11
		}
	  case 1:
	}
}

