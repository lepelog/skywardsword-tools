void entrypoint_100_11() {
	start()
	switch (story_flags[36 0x0024]) {
	  case 0:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 16), ('param3', 9), ('param4', 2), ('param5', 62)])) {
		  case 0:
			printf("######You can't go flying at night.\nYou just can't.\n\n\nIf you want to go out flying, tuck\nyourself into bed and sleep until\ntomorrow morning.")
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 173), ('param3', 31)])
			printf("######What are you doing out here\nso late?!\n\n\n######You what?! You can't seriously think\nyou're going to ride your Loftwing at\nthis time of night, do you?!\n\n######Listen up. Loftwings can't fly at\nnight! They have terrible night vision,\nand only the few who have received\nspecial training can fly in the dark.\n######If you really need to fly, you'll just\nhave to wait for daylight.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 0), ('next', -1), ('param3', 28)])
		}
	  case 1:
		switch (story_flags[23 0x0017]) {
		  case 0:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 18), ('param3', 6), ('param4', 2), ('param5', 18)])) {
			  case 0:
				printf("######You won't find your bird hanging\naround here unless he's enrolling in\nthe academy. You should stick with\nsearching outside for now.\nI'll be asking around for leads too,\nand I'll let you know if I find out\nanything that'll help.")
			  case 1:
				printf("######You're not still wandering around\nthe academy, are you?!\n\n\n######What?!##### Your Loftwing won't come\nwhen you call for it? ######Why would a\nguardian bird not come when it's\ncalled?\nYou know, I've never heard of this\never happening before, so I can't even\ntell you what you're doing wrong...\n\n######But a good senior never hangs an\nunderclassman out to dry. We'll figure\nthis out together!\n\n######You go to the plaza, and ask people\nthere if they know anything. In the\nmeantime, I'll ask around here.")
				scene_flags[0 'Skyloft'][18 0x12] = true;
			}
		  case 1:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 35), ('param3', 6), ('param4', 2), ('param5', 16)])) {
			  case 0:
				printf("######If you need to know anything about\nbirds, you just let ol' #####Pipit##### know!")
			  case 1:
				printf("######Morning, ####!\n\n\n\n######So...today's the #####Wing Ceremony#####.\nAre you ready?\n\n\nAll I'm saying is everyone else is out\npracticing at the plaza, but you seem\npretty...relaxed about the whole thing.\n\n######Of course, that #####Crimson Loftwing #####of\nyours is something special. I'd feel\npretty confident riding him, too!\n\nMy bird won the last ceremony, but\neven I don't think he could beat that\nred terror of yours...\n\n######Of course, a bird's true speed in a\nrace always comes down to the skill\nof the rider.\n\nI'm something of a bird researcher\naround here. ######So, you know, if you\never find yourself in need of some\nbird expertise, come see ol' #####Pipit#####. ")
				scene_flags[0 'Skyloft'][35 0x23] = true;
			}
		}
	}
}

void entrypoint_100_12() {
	start()
	switch (story_flags[29 0x001D]) {
	  case 0:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 64), ('param3', 6), ('param4', 2), ('param5', 52)])) {
		  case 0:
			printf("###########Pipit##### should be in front of the #####Sparring\nHall#####. You know, at the back of the\nKnight Academy.")
		  case 1:
			printf("######Huh?####( Why do you want to know where\n#####Groose #####hangs out?\n\n\n######Is he up to no good again?\n\n\n\nI###### have no clue where he hangs out.\n#####Pipit##### probably does, though.\nYou should talk to him.\n\n######And I think he was looking for you\njust now#####...##### He should be in front of the\n#####Sparring Hall#####.")
			scene_flags[0 'Skyloft'][64 0x40] = true;
		}
	  case 1:
		switch (story_flags[23 0x0017]) {
		  case 0:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 63), ('param3', 6), ('param4', 2), ('param5', 50)])) {
			  case 0:
				printf("###########Pipit##### is the one to ask about birds.\nI saw him downstairs a minute ago.\nWhy don't you look for him there?")
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 0), ('next', 148), ('param3', 39)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 139), ('param3', 33)])
				printf("####\n######Don't men open doors for a lady anymore?\nHow long am I supposed to stand here waiting\nfor a little chivalry?! Ugh...")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 149), ('param3', 39)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 24), ('param3', 33)])
				printf("######Oh! It's you, ####... Say,\nyou look all flustered. Did something\nhappen?\n\n######What?! ####(You can't find your Loftwing?\n\n\n\n######Umm#####...##### I don't know what to tell you.\nI've been here at school the whole time.")
				printf("###########Pipit##### is the one to ask about birds.\nI saw him downstairs a minute ago.\nWhy don't you look for him there?")
				scene_flags[0 'Skyloft'][63 0x3F] = true;
			}
		  case 1:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 62), ('param3', 6), ('param4', 2), ('param5', 48)])) {
			  case 0:
				printf("######If you win today's #####ceremony#####, you'll\nbecome a #####senior #####like us. Good luck!")
			  case 1:
				printf("######Good morning, ####!\nGood luck in the #####Wing Ceremony\n#####today!\n\n######Just think: if you win today, you'll\nbecome a #####senior##### like us and you'll be\na very big step closer to graduating as\na #####knight#####.\n######You'll even get a #####knight's uniform##### like\nI'm wearing. Something tells me you'll\nbe pretty handsome in it!\n\n######But still not as dreamy as...him...")
				scene_flags[0 'Skyloft'][62 0x3E] = true;
			}
		}
	}
}

void entrypoint_100_13() {
	start()
	printf("######Look at this thing. Who knows how long\nthis statue has been here?\n\n\nAnd it only has one eye. Poor thing...\nYou probably know this, but you\ncan press ##### to look around! #####")
}

void entrypoint_100_30() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 30), ('param2', 0), ('next', 183), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 0), ('next', 182), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 25), ('param2', 0), ('next', -1), ('param3', 40)])
}

void entrypoint_100_14() {
	start()
	switch (story_flags[36 0x0024]) {
	  case 0:
		printf("######Mmm-MMM! Another day, another\ntasty soup!")
	  case 1:
		printf("######That boy really gets me steamed!\nIt's nearly time for dinner, and he's\nnowhere to be seen! He'd better not\nbe chasing bugs again.")
	}
}

void entrypoint_100_15() {
	start()
	printf("######Where are you going with that?\nThat's no use to me there!\n\n\n######Stop fiddling around, and finish what\nyou came to do!")
}

void entrypoint_100_16() {
	start()
	switch (story_flags[557 0x022D]) {
	  case 0:
		printf("######Ah! ########! Thank you\nso much! I'm so happy now...and it's\nall because of you.\n\nMy guy is going out on patrol again\ntonight. It's not even required of\nhim--it's just something he feels he\nhas to do...\n######Just thinking about him makes my\nheart start pounding like I just ran\nup a flight of stairs!")
	  case 1:
		switch (story_flags[555 0x022B]) {
		  case 0:
			printf("######This letter from Cawlin... I don't know\nwhat to do about it!\n\n\n######What will Pipit think if he finds out\nabout this?")
		  case 1:
			switch (story_flags[36 0x0024]) {
			  case 0:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 16), ('param3', 5), ('param4', 2), ('param5', 76)])) {
				  case 0:
					flw_193:
					switch (story_flags[552 0x0228]) {
					  case 0:
					  case 1:
						printf("######You need to talk to me? Just come find\nme sometime during the day tomorrow.")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 0), ('next', -1), ('param3', 4)])
					}
				  case 1:
					printf("####\n#What do you think you're doing in a\ngirl's room at this time of night?!\n\n\nI need to take a bath, so get out of\nhere, ####!\n\n\n######Well...I mean I WOULD take a bath if\nwhoever is in there now would hurry\nup and get out. They've been in there\na loooong time...")
					switch (story_flags[547 0x0223]) {
					  case 0:
						goto flw_193
					  case 1:
					}
				}
			  case 1:
				printf("######I can't believe Zelda fell off her bird\nand then down through the clouds.\nShe's so good at riding her bird...\n\n####\n#You saw a ghost?! Are you sure you\nweren't just in shock and maybe\nimagined it?")
			}
		}
	}
}

void entrypoint_100_17() {
	start()
	printf("##############!#####")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 128), ('param3', 39)])
	printf("If you're heading over to the plaza,\nthe quickest way is out the door on the\nground floor.\n\n######The exit on the top floor is still locked,\nso you obviously can't get out there.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 129), ('param3', 39)])
	printf("######What's taking the lunch lady so long?\nI'm going to have a word with her later.")
}

void entrypoint_100_18() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 55), ('param3', 6), ('param4', 2), ('param5', 38)])) {
	  case 0:
		switch (story_flags[28 0x001C]) {
		  case 0:
			printf("######Listen. As an upperclassman, I've got\nsome advice for you. There's something\nyou should always do before you\ngo somewhere dangerous.\nYou should find a bird statue and #####send\nyour prayers to the goddess to save\nyour progress#####. Make it part of your\nroutine!\nThe #####bird statues##### you can pray to are\nmarked on your map. It should be easy\nto find one.")
		  case 1:
			printf("######If you're going out to the waterfall,\nremember that there are some\ndangerous things there. Creepy, crawly\nthings. You'll need to carry a #####sword#####.\n######I think I saw the##### Knight Commander #####go\ninto the Sparring Hall a while ago.\nYou should go ask him if you can\nborrow one!")
			scene_flags[0 'Skyloft'][56 0x38] = true;
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 74), ('param3', 31)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 199), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 20), ('next', 200), ('param3', 47)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', 201), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 21), ('param2', 100), ('next', 203), ('param3', 15)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 202), ('param3', 16)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 20), ('next', 72), ('param3', 48)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 54), ('param3', 6), ('param4', 2), ('param5', 36)])) {
		  case 0:
			printf("######Hey, ####! I was just\nlooking for you.")
			flw_73:
			printf("######I heard your Loftwing has gone\nmissing, so I thought I'd join in the\nsearch.\n\n######And get this: when I asked Fledge what\nhe knew, he started acting weird.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 133), ('param3', 16)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 163), ('param3', 39)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 135), ('param3', 33)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 100), ('next', 76), ('param3', 17)])
			printf("######I'm so sorry, ####!\n\n\n\n######I really wanted to tell you, but...#####if\n#####Groose##### found out I told you...")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 12), ('next', 77), ('param3', 33)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 134), ('param3', 16)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', 78), ('param3', 39)])
			printf("######It sounds like #####Groose##### forced him to\nkeep quiet about it.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 12), ('next', 132), ('param3', 17)])
			printf("######Go on!##### Tell him the truth.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', -1), ('next', 80), ('param3', 16)])
			printf("######Just a little while ago, when I was\ncleaning the dining hall, Groose and\nhis buddies came in.\n\n######They didn't notice I was there and\nstarted talking about their #####plan ##########to hide\n#####your Loftwing.\n\n######I wanted to warn you,\n####. But just as I\ntried to sneak away...\n\n######Groose and his gang grabbed me...\n\n\n\n######They said that if I told you, they'd\nmake sure I would never be able to\nride a bird ever again!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 82), ('param3', 16)])
			printf("######It sounds like Groose and his buddies\nhad a plan to capture your bird and\nhide him near a #####################waterfall#####.\n\n######Well, near a waterfall would mean#####...#####\n####(Quick--let's take a look at your #####map#####.")
			scene_flags[0 'Skyloft'][14 0x0E] = true;
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 85), ('param3', 30)])
			printf("That's it! Right there. I think it means\nthe #####waterfall #####marked here with #####.")
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 86), ('param3', 34)])
			printf("######You know how to read a map, right?\nPress ##### at any time to see a map of\nthe area.##### ######If you get lost, just press #####!#####")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', -1), ('next', 89), ('param3', 16)])
			printf("######Forgive me, ####! I can't\nhelp being such a coward...\nI'm really sorry.")
			scene_flags[0 'Skyloft'][55 0x37] = true;
			story_flags[567 0x0237] = true;
			story_flags[33 0x0021] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
		  case 1:
			printf("##############! Perfect timing.")
			scene_flags[0 'Skyloft'][54 0x36] = true;
			goto flw_73
		}
	}
}

void entrypoint_100_01() {
	start()
	switch (story_flags[29 0x001D]) {
	  case 0:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 45), ('param3', 6), ('param4', 2), ('param5', 30)])) {
		  case 0:
			printf("######If you're talking Loftwings, talk to\n#####Pipit#####. That guy knows almost\neverything about anything with wings.\n\nYou know Pipit, right? He's one of\nthe top students at the Knight\nAcademy.")
		  case 1:
			printf("######What's wrong, ####?######\nWhat?! Your Loftwing is ####2missing?\n\n\n######That's terrible! I was so looking\nforward to seeing that red blur\nstreak through the sky.\n\nNo, no#####...#####I haven't seen him.\n\n\n\n####\n#Hmm#####...##### Why not check with\nSkyloft's##### bird expert#####, ###########Pipit#####?\n######He might be able to help.")
			scene_flags[0 'Skyloft'][45 0x2D] = true;
		}
	  case 1:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 44), ('param3', 6), ('param4', 2), ('param5', 28)])) {
		  case 0:
			printf("####\n#I'm looking forward to seeing your\nLoftwing in action!")
		  case 1:
			printf("######Hey, ####!\nHow's it going? The Wing Ceremony's\nabout to begin, right?\n\nRemember when #####Pipit##### won the last\none right at the last second? It was\nsoooo close. Now, that was a race...\n\n####\n#Hey, your Crimson Loftwing will be\nin the race, right? ####(I'm looking forward\nto seeing what he can do.")
			scene_flags[0 'Skyloft'][44 0x2C] = true;
		}
	}
}

void entrypoint_100_19() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 205), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3073), ('param2', 256), ('next', 97), ('param3', 13)])
	printf("###########Hey!##### ########!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 117), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 12), ('next', 147), ('param3', 33)])
	printf("#####Over here!#####\n\n\n\n##\n###I have some information about\nyour Loftwing. Come over here!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 98), ('param3', 42)])
	scene_flags[0 'Skyloft'][54 0x36] = true;
}

void entrypoint_100_02() {
	start()
	switch (story_flags[23 0x0017]) {
	  case 0:
		printf("######Are you talking to me about your\nLoftwing? Right now?\n\n\n######I'm a little busy here, so buzz off!")
	  case 1:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 22), ('param3', 6), ('param4', 2), ('param5', 64)])) {
		  case 0:
			printf("######The #####Wing Ceremony #####is starting soon.\nQuit with the dillyin' and dallyin', and\nget your tail over there!")
		  case 1:
			printf("######Where in the clouds is that #####Fledge##### boy?\nHe's supposed to be bringing me\n#####barrels#####!\n\n######Sometimes I just don't know what's\ngoing on in that boy's head.")
		}
	}
}

void entrypoint_100_03() {
	start()
	printf("######Master, there is a high probability\nthat this beam of light will lead us to\nclues as to the whereabouts of the\nthree flames.\nI recommend that you investigate what\nlies at the end of this beam of light.")
	story_flags[195 0x00C3] = true;
}

void entrypoint_100_20() {
	start()
	printf("######One more thing, ####!")
	printf("######If you're going out to the waterfall,\nremember that there are some\ndangerous things there. Creepy, crawly\nthings. You'll need to carry a #####sword#####.\n######I think I saw the##### Knight Commander #####go\ninto the Sparring Hall a while ago.\nYou should go ask him if you can\nborrow one!")
}

void entrypoint_100_04() {
	start()
	switch (story_flags[23 0x0017]) {
	  case 0:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 53), ('param3', 6), ('param4', 2), ('param5', 34)])) {
		  case 0:
			printf("######Still got more questions, eh?\n#####My bird! #####Groose?")
			flw_16:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 4)])) {
			  case 0:
				printf("######Uh, I think...uh... Well, to be honest,\nI don't really know where they went.")
				scene_flags[0 'Skyloft'][53 0x35] = true;
			  case 1:
				printf("######Oh, #####Groose #####and his little cronies were\nsaying they were headed down to the\nWing Ceremony.\n\nSo my guess is they might be in town.\nNormally, the fastest way there is just\ndown this path...\n\nBut this gate here still needs some work\nbefore it'll open. Can you go around\nthrough the academy?")
				scene_flags[0 'Skyloft'][53 0x35] = true;
			}
		  case 1:
			printf("######Is something wrong? What's the\nbig hurry?\n\n\nWhat?! Your Loftwing is missing?!\n####2But ######I just #####saw##### him. #####Groose's bird #####was\nchasing off after your feathered fella.\n#####Which way?#####Where's Groose?")
			goto flw_16
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 58), ('param3', 31)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 52), ('param3', 6), ('param4', 2), ('param5', 32)])) {
		  case 0:
			printf("######I'm still workin' on the gate here, so\nit'll be out of commission for a little\nbit until I finish up.\n#####Where's Zelda? #####Ceremony?")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 0)])) {
			  case 0:
				printf("###########Zelda#####? #####Oh, she was just at the Statue\nof the Goddess with Headmaster\nGaepora.\n\nWhat's the best way up to the big\nstatue? It's time you learn for\nyourself, kid. Just press ##### to take a\nlook around. You can't miss her!#####\nIf your view gets a little off when\nyou're #####looking around##### using #####,\nyou can always##### center your view##### with\n#####. Remember that!##########")
			  case 1:
				printf("######All set for today's big #####Wing Ceremony#####?\n\n\n\nIf you come away with a win, you'll\nmove on up to the #####senior class#####.\nThen after you graduate, you get to\nbe a #####rescue knight#####.\nThose knights sure do keep order here\nin Skyloft, and I don't have to tell you\nthat it's a pretty big deal to become\none. I'd like to see you make it.")
			}
		  case 1:
			printf("######Mornin', ####. How's\nlife? Did you manage to get even a\nwink of sleep last night?\n\nFigured you might've been tossin' and\nturnin' all night thinkin' about the big\n#####ceremony##### today.\n\nWhat am I doin'? ####(Oh, just fixin' this\ngate here...\n\n\nIt's been squeaky lately, and we can't\nhave that on the day of the ceremony!\n\n\n######Hey, you haven't already forgotten to\n#####send your ##########prayers #####to the goddess this\nmorning, have you?\n\n##\n###Just face the #####bird statue #####over there,\nand say a short prayer to #####save##### your\nprogress.\n\n########\n###As you know, those bird statues are all\nover Skyloft. It's about time you get in\nthe habit of stoppin' at a statue every\ntime you run by one.\n###########A prayer in time saves nine#####, if you\nknow what I'm sayin'!")
			scene_flags[0 'Skyloft'][52 0x34] = true;
		}
	}
}

void entrypoint_100_21() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 55), ('param3', 6), ('param4', 2), ('param5', 42)])) {
	  case 0:
		printf("###########...#####Do you think you'll make it in time,\n####?\n\n\n######I'm such a wimp#####...##### I'm so sorry.")
	  case 1:
		printf("###########......#####")
	}
}

void entrypoint_100_56() {
	start()
	switch (story_flags[36 0x0024]) {
	  case 0:
		printf("######Watch your step there! Haven't they\ntaught you at the academy that knights\nmust always be vigilant? Sharpen up,\nor you'll never make it to knighthood!")
	  case 1:
		printf("######Watch your step there! You can't\nalways depend on knights like me to\nswoop in and save you.")
	}
}

void entrypoint_100_05() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 58), ('param3', 6), ('param4', 2), ('param5', 14)])) {
	  case 0:
		printf("######Awwww! My #####Sky Stag Beetle#####...\nSo close... ####\n#Oh well. To catch it, I would\nneed a ####G, anyway.\n\nI wish I hadn't thrown out the one I\nbought at #####Beedle's Airshop#####.\n######Awwww...")
	  case 1:
		printf("######OK, so to #####roll#####, first thing you gotta do\nis press ##### to run super fast...\n\n\nWhile you're running, just #####shake the\nNunchuk##### and BAM! If you hit it just\nright, something will drop down from\nabove. So come on... #####You have to try it!")
	}
}

void entrypoint_100_22() {
	start()
	switch (story_flags[304 0x0130]) {
	  case 0:
		switch (story_flags[140 0x008C]) {
		  case 0:
			switch (story_flags[663 0x0297]) {
			  case 0:
				flw_220:
				printf("######I don't hear that voice from the\nrestroom anymore. I wonder who\nit was...")
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 209), ('param3', 31)])
				printf("######These past few days, I swear I hear\na voice every time I walk past the\n#####restroom at night#####.\n\nWho in the world is in there? I just\nwish they'd pipe down!")
			}
		  case 1:
			flw_222:
			switch (story_flags[11 0x000B]) {
			  case 0:
				printf("######I haven't seen Groose around recently.\nI wonder how that boy's doing.")
			  case 1:
				switch (story_flags[4 0x0004]) {
				  case 0:
					printf("######How are things? Now that you're here,\nyou should find yourself a #####bed #####to lie\ndown in and take a rest.")
				  case 1:
					printf("######Oh, you're taking off on your journey\nnow? #####Then you probably won't be\neating here for a while!\n\n####\n#Well, take care of yourself!\n\n\n\n######Make sure you come home every now\nand then. Nothing like a good sleep in\nyour own bed.")
				}
			}
		}
	  case 1:
		goto flw_222
	}
}

void entrypoint_100_57() {
	start()
	switch (story_flags[36 0x0024]) {
	  case 0:
		printf("######Whoa there, trainee! You'll never be\npromoted to full knighthood if you\ncan't learn to keep your wits about you.\n\nOh, and don't let me catch you going\nout flying at night. Only trained\nknights such as myself should be doing\nthat. You take care now!")
	  case 1:
		printf("######Watch your footing out there! In the\ndark you never know when you might\ntake a wrong step off a ledge.\n\nOh, and don't let me catch you going\nout flying at night. Only trained\nknights such as myself should be doing\nthat. You take care now!")
	}
}

void entrypoint_100_23() {
	start()
	printf("###########Hold up, ####!\nHey! Hey, ####!\n\n#####\nCould you help me with something?\nAll you have to do is use ##### to #####dash #####and\n#####roll #####into the tree.\n\nJust like I've been doing. Dash, then\n#####shake the Nunchuk #####when you're in\nfront of the tree to--BAM! Do a##### roll\n#####right into it! So come on...##### Pleeeeease?")
}

void entrypoint_100_07() {
	start()
	switch (story_flags[36 0x0024]) {
	  case 0:
		switch (story_flags[663 0x0297]) {
		  case 0:
			switch (story_flags[559 0x022F]) {
			  case 0:
				printf("######I don't hear any voices coming from\nthe restroom anymore.\n\n\nBut now Cawlin has been crying\nhimself to sleep in Groose's room...\nIs there anything we can do?")
			  case 1:
				goto flw_220
			}
		  case 1:
			switch (story_flags[11 0x000B]) {
			  case 0:
				printf("######I haven't seen Groose around recently.\nI wonder how that boy's doing.")
			  case 1:
				switch (story_flags[140 0x008C]) {
				  case 0:
					printf("######How are things? Now that you're here,\nyou should find yourself a #####bed #####to lie\ndown in and take a rest.")
				  case 1:
					printf("######Even those bratty kids are asleep.\nAhhhh, finally some peace.\n\n\n####\n#So! Do you think you can find Zelda?\nBest of luck to you!")
				}
			}
		}
	  case 1:
		printf("######I'm gonna shut this! We can't have any\ncreepy apparitions crawlin' in at night.\n\n\nI'll leave that door up on the second\nfloor open, though. Just don't let me\ncatch you going out after dark!\n\nNow I know your cute little friend\nZelda is gone and you want to go rescue\nher, but no honest folk here in Skyloft\ngo skulking around in the night.")
	}
}

void entrypoint_100_24() {
	start()
	printf("######Whooooooooa!##### You did it! \nA #####Sky Stag Beetle#####!\n\n\nWait up!")
	scene_flags[0 'Skyloft'][58 0x3A] = true;
}

void entrypoint_100_25() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 13), ('param3', 5), ('param4', 2), ('param5', 44)])) {
	  case 0:
		printf("###########I've had it!\n#####\n\n\n##\n###I'm going to have a word with\nthe headmaster about having you\nexpelled!")
	  case 1:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 12), ('param3', 5), ('param4', 2), ('param5', 46)])) {
		  case 0:
			printf("###########Enough already! #####You little brat!\n\n\n\n##\n###Do that again, and you'll be mopping\nsoup stains for a week!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', -1), ('param3', 4)])
		  case 1:
			printf("######What do you think you're doing?!\n\n\n\n#######\n###You'd better clean that up!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', -1), ('param3', 4)])
		}
	}
}

void entrypoint_100_09() {
	start()
	switch (story_flags[29 0x001D]) {
	  case 0:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 43), ('param3', 6), ('param4', 2), ('param5', 24)])) {
		  case 0:
			printf("######Press ##### to check your #####map #####and find\nyour way to the Statue of the Goddess.\nLook for your bird there!#####")
		  case 1:
			printf("#####WWhat's up, ####? You\nseem to be in a hurry...\n\n\nWhat's this about your bird? Oh, that\nunusual Crimson Loftwing...\n####(Have I seen him?########## ######I'm sorry. I haven't.\n\n######Why don't you look for him by the\nStatue of the Goddess? You'll have a\ngood view of the whole town from way\nup there.\nJust check your #####map #####using #####.\nKnowing you, that's the best way to\navoid getting lost...again.#####")
			scene_flags[0 'Skyloft'][43 0x2B] = true;
		}
	  case 1:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 42), ('param3', 6), ('param4', 2), ('param5', 22)])) {
		  case 0:
			printf("######I dream of playing the part of the\ngoddess at the Wing Ceremony!\nJust to have a romantic ceremony\nwith the handsome, winning knight.\nJust once is all I ask...")
		  case 1:
			printf("######Hiya, ####! Nice breeze\ntoday, huh? Perfect for the ceremony!\n\n\n######So who do you think will win today?\nI guess #####Groose##### is a strong contender,\nbut...\n\n######The winner will get blessed by a village\ngirl chosen to represent the goddess...\n######How romantic!")
			scene_flags[0 'Skyloft'][42 0x2A] = true;
		}
	}
}

void entrypoint_100_26() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 22), ('param3', 6), ('param4', 2), ('param5', 54)])) {
	  case 0:
		printf("######What's all this? I thought I told #####Fledge\n#####to carry that! Bah, it's probably for\nthe best... That skinny boy would\nprobably have gotten flattened.\n####\n#Say...don't you have some important\nceremony or some such today? Hmph!\nWell, thanks for the help.")
	  case 1:
		printf("####\n#Oh? ########! You're\ndelivering something for me?\n\n\n######That was supposed to be #####Fledge's\n#####job...\n\n\n######Anyhow, just bring the #####barrel##### here.\nYes, here.")
	}
}

void entrypoint_100_10() {
	start()
	printf("")
}

