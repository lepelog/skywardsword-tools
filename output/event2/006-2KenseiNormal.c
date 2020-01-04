void entrypoint_006_209() {
	start()
	switch (story_flags[463 0x01CF]) {
	  case 0:
		printf("Unfortunately, she has now been led\naway by an unknown individual and\nhas already moved to another area.\n\nAs you did at #####Skyview Spring#####,\nI recommend seeking guidance from\nthe goddess statue located within\nthe #####Earth Spring#####.######")
	  case 1:
		printf("The probability of recovering Zelda\nunharmed is decreasing rapidly.\nYou must find her as soon as possible.######")
	}
}

void entrypoint_006_243() {
	start()
	switch (story_flags[362 0x016A]) {
	  case 0:
		printf("However, in order to aid Levias,\nyou will need to learn the #####Spiral\nCharge #####flight maneuver from\n#####Instructor Owlan#####.######")
	  case 1:
		printf("#####Instructor Owlan #####knows a great deal\nabout Levias. I recommend that you\nask him for more information about\nthis great spirit.######")
	}
}

void entrypoint_006_226() {
	start()
	switch (story_flags[157 0x009D]) {
	  case 0:
		printf("Using the #####Clawshots#####, you have managed\nto enter the #####Lanayru Sand Sea#####.\nI suggest you search the area for\nclues leading to the next sacred flame.######")
	  case 1:
		printf("There is a 96% chance that you can \nreach new locations within #####Lanayru\nProvince##### using the #####Clawshots##### you got\nfrom the #####trial #####in the #####Lanayru Desert#####.######")
	}
}

void entrypoint_006_244() {
	start()
	switch (story_flags[368 0x0170]) {
	  case 0:
		printf("However, Levias is behaving in a highly\naggressive manner. It is impossible to\ntalk with him in this state.\n\nI suggest you utilize the Spiral Charge\nto dislodge the foreign objects\nattached to him.######")
	  case 1:
		switch (story_flags[365 0x016D]) {
		  case 0:
			printf("I calculate a 90% chance that #####Levias\n#####will appear if you take him an\noffering of the #####pumpkin soup #####he\nenjoys consuming.\nTo this end, I suggest you take the\npumpkin soup to the small island with\nthe #####rainbow##### inside the #####thunderhead#####.######")
		  case 1:
			printf("There is an 85% chance that talking\nwith the owner of the Lumpy Pumpkin\nwill yield information that will aid\nyour search for Levias.######")
		}
	}
}

void entrypoint_006_296() {
	start()
	printf("Current Session Play Time: #########################\nTotal Play Time: ###################################\nThis concludes my analysis.")
}

void entrypoint_006_227() {
	start()
	switch (story_flags[269 0x010D]) {
	  case 0:
		printf("I advise you to take the sea chart\nyou've obtained back to the robot\ncaptain.######")
	  case 1:
		printf("To take back the ship, you will first\nneed to travel to #####Skipper's Retreat#####\nand obtain a sea chart.######")
	}
}

void entrypoint_006_248() {
	start()
	switch (story_flags[16 0x0010]) {
	  case 0:
		switch (story_flags[19 0x0013]) {
		  case 0:
			switch (story_flags[21 0x0015]) {
			  case 0:
			  case 1:
				printf("You have learned two parts of the #####Song\nof the ##########Hero###############. Your next move should be\nto seek out the dragon who rules over\n#####Lanayru Province##### as fast as possible.\n#####And after that?#####Got it.")
				flw_16:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 14)])) {
				  case 0:
					printf("When you have collected three parts\nof the Song of the Hero, return to\nthe great sky spirit, #####Levias#####, and\ncomplete the Song of the Hero.\nIf the information you've gathered is\naccurate, doing this will open the path\nto the #####Triforce#####.\n\nShould you go on to successfully obtain\nthe #####Triforce#####, you must use its power to\nvanquish #####Demise#####.\n\nThis is not only your ultimate goal but\nalso your destiny, ######Master.######")
				  case 1:
				}
			}
		  case 1:
			switch (story_flags[21 0x0015]) {
			  case 0:
				printf("You have learned two parts of the #####Song\nof the ##########Hero###############. Your next move should be\nto seek out the dragon who rules over\n#####Eldin Province##### as fast as possible.\n#####And after that?#####Got it.")
				goto flw_16
			  case 1:
				printf("You have learned one part of the #####Song\nof the ##########Hero###############. To find the other parts,\nseek out the dragons who rule over the\n#####Eldin and Lanayru Provinces#####.\n#####And after that?#####Got it.")
				goto flw_16
			}
		}
	  case 1:
		switch (story_flags[19 0x0013]) {
		  case 0:
			switch (story_flags[21 0x0015]) {
			  case 0:
				printf("You have learned two parts of the #####Song\nof the ##########Hero###############. Your next move should\nbe to seek out the dragon who rules\nover #####Faron Province##### as fast as possible.\n#####And after that?#####Got it.")
				goto flw_16
			  case 1:
				printf("You have learned one part of the #####Song\nof the ##########Hero###############. To find the other parts,\nseek out the dragons who rule over the\n#####Faron and Lanayru Provinces#####.\n#####And after that?#####Got it.")
				goto flw_16
			}
		  case 1:
			switch (story_flags[21 0x0015]) {
			  case 0:
				printf("You have learned one part of the #####Song\nof the ##########Hero###############. To find the other parts,\nseek out the dragons who rule over the\n#####Faron and Eldin Provinces#####.\n#####And after that?#####Got it.")
				goto flw_16
			  case 1:
			}
		}
	}
}

void entrypoint_006_249() {
	start()
	printf("I recommend returning to #####Levias#####, the \ngreat sky spirit, to hear the final part\nand complete the Song of the Hero.\n#####And after that?#####Got it.")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 16)])) {
	  case 0:
		printf("I infer the completed Song of the\nHero will open a path to the Triforce.\n\n\nShould you go on to successfully obtain\nthe #####Triforce#####, you must use its power to\nvanquish #####Demise#####.###### \n\nDoing so is your ultimate goal and your\ndestiny, ######Master.")
	  case 1:
	}
}

void entrypoint_006_217() {
	start()
	switch (story_flags[662 0x0296]) {
	  case 0:
		printf("By rotating the windmills to face the\nLight Tower, you have revealed a\nstructure hidden atop the tower.\nI advise you to investigate it.######")
	  case 1:
		switch (story_flags[325 0x0145]) {
		  case 0:
			printf("There is an 80% chance that one of\nthe #####two whirling sails##### we seek is the\nwindmill repaired by #####Jakamar#####.######")
		  case 1:
			switch (story_flags[1108 0x0454]) {
			  case 0:
				printf("Although a connection with the two\nsails is uncertain, there is an 85%\nchance that the object you just found\nis a #####propeller##### from a Skyloft windmill.\nI recommend guiding the robot from\nthe Scrap Shop back to Skyloft while\nhe carries the alleged propeller.######")
			  case 1:
				switch (story_flags[323 0x0143]) {
				  case 0:
					printf("Although a connection with the two\nsails is not 100% certain, it is clear that\na #####propeller #####from a Skyloft windmill\nhas fallen below the clouds.\nIt is possible to locate the propeller\nusing your #####dowsing #####ability.\n\n\nOnce you have located it, you can\nget the robot you reactivated in the\nScrap Shop to carry it back to\nSkyloft for you.######")
				  case 1:
					switch (story_flags[322 0x0142]) {
					  case 0:
						printf("Although a connection with the two\nsails is not 100% certain, it is clear that\na #####propeller #####from a Skyloft windmill\nhas fallen below the clouds.\nI recommend you look for a way to\nretrieve this propeller.######")
					  case 1:
						printf("Although the meaning of this phrase is\nunclear, I recommend that you search\naround Skyloft for two things that\ncould be construed as whirling sails.######")
					}
				}
			}
		}
	}
}

void entrypoint_006_200() {
	start()
	printf("To search for #####Zelda#####, I recommend you\n#####dive##### into the #####column of light #####in the\nclouds and fall to the ground below.\n\nThe column of light is to the south of\n#####Skyloft#####.######")
}

void entrypoint_006_201() {
	start()
	switch (story_flags[130 0x0082]) {
	  case 0:
		printf("I recommend you follow the advice of\nthe old woman at the #####Sealed Temple \n#####and head to #####Faron Woods#####.######")
	  case 1:
		printf("I've detected remnants of civilization\nhere on the surface. I advise you to\nfirst explore the area near where you\ntouched down.######")
	}
}

void entrypoint_006_236() {
	start()
	switch (story_flags[187 0x00BB]) {
	  case 0:
		printf("I've confirmed a very large structure\npositioned atop the volcano's summit.\nI recommend you explore it.######")
	  case 1:
		printf("To extinguish the wall of fire blocking\nyour path beyond the summit, you need\nto transport the giant #####water basin #####used\nby the Water Dragon.######")
	}
}

void entrypoint_006_202() {
	start()
	switch (story_flags[56 0x0038]) {
	  case 0:
		switch (story_flags[57 0x0039]) {
		  case 0:
			printf("I recommend that you climb onto\n#####Bucha#####'s back and take the Kikwi\nheirloom.")
		  case 1:
			printf("If we can locate all of the Kikwis\nscattered throughout the area, it is\nlikely the elder Kikwi will be able to\nprovide helpful information.######")
		}
	  case 1:
		switch (story_flags[52 0x0034]) {
		  case 0:
			printf("Based on information received from\nthe Kikwi #####Machi#####, there is an 80%\nchance that finding the Kikwi elder\nwill aid our search for Zelda.######")
		  case 1:
			printf("Zelda is likely to be perceived as a\nconspicuous character in these woods.\nConfer with local life-forms to see if\nthey know her whereabouts.######")
		}
	}
}

void entrypoint_006_222() {
	start()
	switch (story_flags[66 0x0042]) {
	  case 0:
		printf("The entrance to the place that holds\n#####Farore's Flame#####, one of the sacred\nflames, has been opened by the\nWater Dragon.\nIt is very likely that a great number of\nmonsters infest this place, so I highly\nrecommend you equip yourself\nproperly for a hostile environment.######")
	  case 1:
		printf("To learn the location of the sacred\nflame in #####Faron Province#####, you must find\n#####sacred water##### for the Water Dragon.\n\nI have registered the sacred water as\na target you can now search for using\nyour #####dowsing #####ability.######")
	}
}

void entrypoint_006_240() {
	start()
	switch (story_flags[344 0x0158]) {
	  case 0:
		printf("######Master, you have now passed through\nthe #####Gate of Time#####.\n\n\nProceed forward. I calculate a 99%\nprobability that #####Zelda #####waits just ahead.######")
	  case 1:
		printf("The time has finally come to awaken\nthe #####Gate of Time #####using the power of\nyour enhanced sword. I suggest you\nmake this your immediate priority.######")
	}
}

void entrypoint_006_208() {
	start()
	switch (story_flags[120 0x0078]) {
	  case 0:
		printf("You have reassembled the key to the\ntemple on Eldin Volcano, and you are\nheaded there to open its door.######")
	  case 1:
		printf("You are currently looking for the #####key\nto open the temple door#####. This key\nhas been split into five pieces which can\nbe located with your #####dowsing##### ability.######")
	}
}

