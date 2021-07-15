          void entrypoint_122_01() {
/*<  2>*/ 	start()
/*<133>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<134>*/ 		printf("Jetzt, wo der Wahrsager wieder da ist,\nsprüht der Basar wieder vor Leben!\nDer Kerl ist einfach zu ulkig!")
          	  case 1:
/*<125>*/ 		switch (story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */]) {
          		  case 0:
/*<126>*/ 			switch (story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */]) {
          			  case 0:
/*<135>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<136>*/ 					printf("Also hat sich unser lieber Wahrsager\ntatsächlich in seinem Haus verkrochen.\n\n\nWenn doch nur jemand für ihn eine\nneue Kristallkugel auftreiben würde...")
          				  case 1:
/*<128>*/ 					printf("Ich glaube, sein Haus steht irgendwo\n<r<im östlichen Teil des Wolkenhorts>>...\n\n\nEr heult vor sich hin wie ein kleines\nBaby. Vielleicht siehst du mal nach\nihm?")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 127, 'param3': 31}
/*<127>*/ 				printf("Der <b<Wahrsager >>macht in letzter Zeit\nständig so ein verdrossenes Gesicht...\n\n\nEr meinte, sein Kristalldingsda sei\nkaputt und verkriecht sich seitdem\nständig in seinem Haus.")
/*<132>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<193>*/ 					printf("Tja...")
/*<194>*/ 					printf("Also hat sich unser lieber Wahrsager\ntatsächlich in seinem Haus verkrochen.\n\n\nWenn doch nur jemand für ihn eine\nneue Kristallkugel auftreiben würde...")
          					flw_129:
/*<129>*/ 					story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */] = true;
          				  case 1:
/*<131>*/ 					printf("Wie wäre es, wenn du mal nach dem\nWahrsager siehst?\n\n\nSein Haus liegt <r<im östlichen Teil des\nWolkenhorts>>.")
          					goto flw_129
          				}
          			}
          		  case 1:
/*<139>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<140>*/ 				printf("Warst du schon mal nachts hier im\nWolkenhort unterwegs?<pause19> Da ist so\neiniges anders als tagsüber!\n\nWenn du unseren Item-Händler nachts\nin seinem Haus besuchst, kauft er dir\nzum Beispiel deine Schätze ab.\n\nNachts ist es zwar gefährlicher als\ntagsüber, aber für einen Ritterschüler\nsollte das doch kein Problem sein!\n\nNicht vergessen...<pause19> <g<Leg dich ins Bett>>,\nwenn du den Wolkenhort bei Nacht\nerleben willst!")
          			  case 1:
/*<  3>*/ 				printf("Wenn du müde wirst, dann...<pause19> leg dich\neine Runde schlafen!\n\n\nDu kannst dich <g<überall dort ausruhen,\nwo du ein Bett findest>>. Und glaub mir,\ndu wirst dich wundern!\n\nDer Unterschied zwischen Tag und\nNacht im Wolkenhort ist größer als\ndu denkst!\n\nAlso <g<leg dich schlafen >>und sieh dir den\nWolkenhort bei Nacht an, wenn du ein\npaar interessante Dinge erleben willst!")
          			}
          		}
          	}
          }

          void entrypoint_122_19() {
/*< 56>*/ 	start()
/*<111>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 34, 'next': 112, 'param3': 32}
/*<112>*/ 	{'type': 'type3', 'subType': 1, 'param1': 34, 'param2': -1, 'next': 57, 'param3': 50}
/*< 57>*/ 	printf("Spieglein, Spieglein an der Wand...\nWer ist der Schönste im Wolkenland?")
/*<114>*/ 	set_camera(7, 0)
/*<113>*/ 	printf("\x0E\x01\x09\x04\x2200\x02Das ist es doch, was du denkst, oder\netwa nicht, Link?")
          }

          void entrypoint_122_02() {
/*<  4>*/ 	start()
/*<161>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<162>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<168>*/ 			switch (story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */]) {
          			  case 0:
/*<169>*/ 				printf("Ich habe da so ein Gerücht gehört.\n<r<Nachts>> erklingt beim <r<Wohnheim >>der\nRitterschule die Stimme einer Frau!\n\nIch mag zwar aussehen wie ein starker\nKerl, aber solche Geschichten treiben\nmir den Angstschweiß auf die Stirn!")
/*<170>*/ 				printf("Was? Eine Hand? Aus der Toilette...\n\n\n\nIst <pause14>es dir nicht ein wenig peinlich, den\nLeuten so etwas zu erzählen?")
          			  case 1:
/*<165>*/ 				switch (story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */]) {
          				  case 0:
/*<166>*/ 					printf("Ich habe da so ein Gerücht gehört.\n<r<Nachts>> erklingt beim <r<Wohnheim >>der\nRitterschule die Stimme einer Frau!\n\nIch mag zwar aussehen wie ein starker\nKerl, aber solche Geschichten treiben\nmir den Angstschweiß auf die Stirn!")
/*<167>*/ 					printf("Was sagst du da?<pause14> Jemand auf der\nToilette ruft nach Papier?\n\n\nIch kenne das Gefühl, wenn man da\nsitzt und plötzlich bemerkt, dass kein\nPapier da ist! Das ist wirklich unschön.")
          				  case 1:
/*<163>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 31}
/*<164>*/ 					printf("Ich habe da so ein Gerücht gehört.\n<r<Nachts>> erklingt beim <r<Wohnheim >>der\nRitterschule die Stimme einer Frau!\n\nIch mag zwar aussehen wie ein starker\nKerl, aber solche Geschichten treiben\nmir den Angstschweiß auf die Stirn!")
          				}
          			}
          		  case 1:
          			flw_137:
/*<137>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<138>*/ 				printf("(2) drücken und die Hilfe aufrufen...\nDas machst du doch ab und zu, oder?\x0E\x01\x11\x02\x5CD")
          			  case 1:
/*<  5>*/ 				printf("Du bist jetzt ein vollwertiger Anwärter\nauf den Ritterposten. Gratulation!\n\n\nAber ich bin sicher, es gibt noch viele\nDinge, über die du nicht Bescheid\nweißt, nicht wahr?\n\n\x201ESolltest du Probleme haben, drücke\nstets (2) und rufe die Hilfe auf.\x201C Das\nist so etwas wie eine Grundregel!\x0E\x01\x11\x02\x5CD")
          			}
          		}
          	  case 1:
          		goto flw_137
          	}
          }

          void entrypoint_122_03() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("\x0E\x01\x09\x04\x00\x01Oh, du bist es, Link! Heute\nist es endlich so weit. Freust du dich\nschon auf die Vogelreiter-Zeremonie?\n\nWenn du gewinnst, kannst du in die\nOberstufe aufsteigen!")
/*<  8>*/ 	printf("Hier im Wolkenhort gilt man erst als\nerwachsen, wenn man das Reiten auf\neinem Wolkenvogel beherrscht.\n\n\x0E\x01\x09\x04\n\x404Ihr Jungspunde, die ihr Ritter werden\nwollt, müsst natürlich noch viel mehr\nbeherrschen als das.\n\nAber auch wir unterziehen uns stets\nverschiedenen Übungen und lernen so,\nauf den Wolkenvögeln zu reiten!")
          }

          void entrypoint_122_20() {
/*< 58>*/ 	start()
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': -1, 'param3': 24}
          }

          void entrypoint_122_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x00\x02Denkst du nicht, dass es ein klein wenig\nunhöflich ist, einfach so in mein Haus\nhereinzuplatzen?\n\nIch arbeite ja üblicherweise im Basar,\naber heute ist schließlich der Tag der\nVogelreiter-Zeremonie, daher habe ich\nfrei!\n\x0E\x01\x09\x04\x00\x15Am liebsten würde ich mir immer frei\nnehmen, wenn viel zu tun ist, aber am\nEnde ist mir dann doch nur langweilig.")
          }

          void entrypoint_122_21() {
/*< 63>*/ 	start()
/*< 68>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 69, 'param3': 32}
/*< 69>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 116, 'param3': 32}
/*<116>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 117, 'param3': 17}
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 74, 'param3': 17}
/*< 74>*/ 	set_camera(2, 0)
/*< 70>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 64, 'param3': 50}
/*< 64>*/ 	printf("\x0E\x01\x09\x04\x1211\x16Bis<pause0F> zum nächsten Mal!")
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 65, 'param3': 50}
/*< 65>*/ 	printf("\x0E\x01\x09\x04\x1408\x913Ja, ich freue mich schon!\n\n\n\nIch sollte mich wohl bald bei deiner\nMutter vorstellen.\n\n\nSie ist sicher genauso ehrlich und\nfleißig wie du, oder?")
/*< 72>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 66, 'param3': 50}
/*< 66>*/ 	printf("\x0E\x01\x09\x04\x1209\xC18Bei meiner Mutter?!? Ähm, also...\nNein, dafür ist es wohl noch zu früh...")
/*< 73>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 67, 'param3': 50}
/*< 67>*/ 	printf("\x0E\x01\x09\x04\x1400\x05Wieso denn das? Ich finde nicht, dass\nes zu früh ist!\n\n\n\x0E\x01\x09\x04\x1408\x913Lade mich doch einfach mal zu dir\nnach Hause ein!")
          }

          void entrypoint_122_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf("\x0E\x01\x09\x04\x00\x01Hallo, Link!\nWas willst du denn so spät nachts hier?\n\n\n\x0E\x01\x09\x04\x11\x1300Und wie lange braucht Mama noch mit\ndem Abendessen? Ich hab schon einen\nRiiiesenhunger!")
          }

          void entrypoint_122_22() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("\x0E\x01\x09\x04\x0E\x812Die Göttin ist verschwunden!\n\n\n\n\x0E\x01\x09\x04\x0F\xD00Was geschieht denn hier bloß?")
/*< 77>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
          	  case 1:
/*< 78>*/ 		printf("Meine Kuki ist immer noch nicht nach\nHause gekommen...\n\n\nIch mache mir wirklich Sorgen um sie!\n\x0E\x01\x09\x04\x00\x800Würdest du mir helfen, sie zu suchen,\nLink?")
          	}
          }

          void entrypoint_122_06() {
/*< 13>*/ 	start()
/*< 83>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 84>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hey, mein Freund! Kommst du gut mit\nmeinem kleinen Trapo zurecht? Er hat\nein loses Mundwerk, aber eigentlich ist\ner ein sehr netter Roboter.\nIch hoffe, ihr zwei werdet Freunde!")
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x03Na, so spät noch allein unterwegs, mein\nFreund? Pass bloß auf, dass dir die\nLemurin nicht in den Hintern beißen!\n\nNachts geht man hier im Wolkenhort\nbesser nur raus, wenn es wirklich\nunvermeidbar ist!")
          	}
          }

          void entrypoint_122_23() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("Mein Meister scheint viel Spaß dabei zu\nhaben, Gegenstände oder Maschinen zu\nreparieren.\n\nGerade baut er eine vollautomatische\nWaschmaschine für seine Mutter!\nIst mein Meister nicht nett?\n\nGanz anders als ein gewisser grüner\nWicht, der meine verehrte Phai dazu\nbenutzt, mich ständig irgendwohin zu\nbeordern!")
          }

          void entrypoint_122_07() {
/*< 14>*/ 	start()
/*< 16>*/ 	printf("\x0E\x01\x09\x04\x00VMein Junge treibt mich noch zur\nWeißglut! Kannst du ihm nicht ins\nGewissen reden?")
          	flw_85:
/*< 85>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 86>*/ 		printf("Ich war so froh, dass dieser Roboter\nwieder funktioniert, und dann das!\nIch dachte ja, jetzt hört er endlich mit\nder ständigen Werkelei auf, aber nein!\nJetzt schraubt er Tag und Nacht an\nirgendwelchem anderen Müll herum.\nDieser Junge raubt mir den letzten\nNerv!")
          	  case 1:
/*< 22>*/ 		printf("Ständig werkelt er bis spät in die Nacht\nan diesem Roboter unserer Vorfahren\nherum!\n\nWozu soll es denn gut sein, diesen alten\nSchrotthaufen zu reparieren?")
          	}
          }

          void entrypoint_122_24() {
/*< 87>*/ 	start()
/*< 88>*/ 	set_camera(3, 0)
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_122_08() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf("\x0E\x01\x09\x04\x00VMein Junge ist heute schon wieder voll\nDreck und Öl nach Hause gekommen!\n\n\nEs mag ja sein, dass er mit Maschinen\nhantiert, aber jeden Tag alles so zu\nverdrecken... Furchtbar!\n[1]Dein Junge?[2]Das klingt\nanstrengend.")
/*< 19>*/ 	switch (choice(2)) {
          	  case 0:
/*< 20>*/ 		printf("Der Schmutzfink, der sich tagtäglich in\nder Werkstatt die Kleidung schmutzig\nmacht! Du kennst ihn doch?")
          		goto flw_85
          	  case 1:
/*< 21>*/ 		printf("Dieser Junge bringt mich noch um den\nVerstand! So ein Dreckspatz!")
          		goto flw_85
          	}
          }

          void entrypoint_122_25() {
/*< 90>*/ 	start()
/*< 92>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 95>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 94>*/ 			printf("\x0E\x01\x09\x04\x00\x1101Solltest du dich nicht auf die Socken\nmachen und schleunigst deinen roten\nWolkenvogel suchen?")
          		  case 1:
/*< 93>*/ 			printf("\x0E\x01\x09\x04\x00\x1104Was war das denn eben für ein Streit\ndort drüben? Das schien ja eine recht\nernste Sache zu sein...")
          		}
          	  case 1:
/*< 91>*/ 		printf("\x0E\x01\x09\x04\x00\x05Es ist ein tolles Gefühl, hier einfach\nnur zu sitzen.\n\n\nWenn ich hier sitze, muss ich immer an\ndieses eine Mädchen denken...\n\n\n\x0E\x01\x09\x04\n\xC00<b<Kabocha>> aus der Kürbisbar ist so\nunendlich süß...")
          	}
          }

          void entrypoint_122_09() {
/*< 23>*/ 	start()
/*< 79>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*< 80>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hallo, Link! Hast du hier\nirgendwo meine Kuki gesehen?\n\n\nSie läuft mir ständig davon! Ich mache\nmir große Sorgen...")
          	  case 1:
/*< 24>*/ 		printf("\x0E\x01\x09\x04\x00\nHallo, Link! Hast du denn\nzufällig meine kleine Kuki gesehen?\n\n\nSie läuft ständig wie wild herum, da\nkomme ich nicht hinterher... Ich hoffe\njedes Mal, dass sie bloß wohlbehalten\nwieder zurückkommt...")
          	}
          }

          void entrypoint_122_26() {
/*< 96>*/ 	start()
/*< 97>*/ 	set_camera(4, 0)
/*< 98>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_122_27() {
/*<101>*/ 	start()
/*<195>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<197>*/ 		switch (story_flags[1116 /* us: 805A9B57 0x04, jp: 805ACDD7 0x04 */]) {
          		  case 0:
/*<198>*/ 			entrypoint_118_12();
          		  case 1:
          			flw_102:
/*<102>*/ 			printf("\x0E\x01\x09\x04\x00\x04Oh, du bist es! Die Göttin ist weg!\n\n\n\n\x0E\x01\x09\x04\x00\x11Ist die Göttin etwa böse, weil ich nicht\nauf Mama und Papa gehört habe?")
/*<196>*/ 			story_flags[1116 /* us: 805A9B57 0x04, jp: 805ACDD7 0x04 */] = true;
          		}
          	  case 1:
          		goto flw_102
          	}
          }

          void entrypoint_122_10() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x00\x01Hallo, Link!\nDas da ist mein Haus!\n\n\nHeute gehe ich wieder spielen, aber ich\nsag dir nicht, mit wem! Das wird lustig!")
          }

          void entrypoint_122_28() {
/*<103>*/ 	start()
/*<104>*/ 	printf("\x0E\x01\x09\x04\x09\x30AAaaaaaaaah!\n\n\n\n\x0E\x01\x09\x04ÿ\xFF04Oh...<pause14> Na ja, setz dich ruhig hin, wenn\ndu willst.\n\n\n\x0E\x01\x09\x04ÿ\x3FFAber mach dieses Möbelstück ja nicht\nschmutzig! Du kannst dir gar nicht\nvorstellen, wie teuer das war!")
          }

          void entrypoint_122_11() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("\x0E\x01\x09\x04\x00\x11Dämonenonkel... *chrrr*\nGanz lieb... *chrrr*")
          }

          void entrypoint_122_29() {
/*<105>*/ 	start()
/*<109>*/ 	set_camera(5, 0)
/*<106>*/ 	printf("Es tut mir leid, aber die Essenszeit ist\nschon vorüber. Du musst wohl bis zum\nMittagessen warten.")
          }

          void entrypoint_122_12() {
/*< 29>*/ 	start()
/*<189>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<190>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hallo, Link! Sieh dich\nmal hier um!\n\n\nOhne die Monster ist es hier nachts\nrichtig friedlich...\n\n\nIch kann mich nicht erinnern, wann ich\nzum letzten Mal so einen entspannten\nNachtspaziergang machen konnte...")
          	  case 1:
/*< 43>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
          			flw_42:
/*< 42>*/ 			printf("\x0E\x01\x09\x04\x00\x01Du hast meine kleine Kuki gefunden,\nrichtig? Vielen Dank!\n\n\n\x0E\x01\x09\x04\x00\x09Und sieh nur, da machen wir uns solche\nSorgen und sie liegt hier seelenruhig\nund schnarcht!")
          		  case 1:
/*< 99>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<115>*/ 				switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          				  case 0:
          					goto flw_42
          				  case 1:
/*<100>*/ 					printf("\x0E\x01\x09\x04\x00\x0EIst das wahr? Du hast Kuki wirklich\ngefunden?\n\n\nIch hab's doch gleich gesagt! Hier bei\nuns im Wolkenhort gibt es eben keine\nUnholde, die Kinder entführen!")
          				}
          			  case 1:
/*< 40>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*< 41>*/ 					printf("\x0E\x01\x09\x04\x00\x04Im Namen der Göttin... Wo ist meine\nkleine Kuki?\n\n\nMeine Frau meint, sie wäre entführt\nworden, aber das glaube ich nicht!\n\x0E\x01\x09\x04\x0E\xD00Hier im Wolkenhort lebt niemand, der\nso etwas Schreckliches tun würde!\n\x0E\x01\x09\x04\x00\xD0FJa, ich bin sicher, sie kommt bald\nwieder zurück...\n\n\nNa ja, sag Kuki jedenfalls, dass wir auf\nsie warten, falls du sie sehen solltest!")
          				  case 1:
/*< 30>*/ 					printf("\x0E\x01\x09\x04\x00\x01Hallöchen, Link! Meine\nKuki sieht so unendlich süß aus, wenn\nsie schläft, findest du nicht?\n\nIch arbeite wirklich hart für sie, und\nich habe das Gefühl, das ist es wert!\n\n\nAber was meint sie bloß, wenn sie\n\x201Elieber Dämonenonkel\x201C sagt?")
          				}
          			}
          		}
          	}
          }

          void entrypoint_122_13() {
/*< 31>*/ 	start()
/*< 61>*/ 	switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          	  case 0:
/*<188>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 60, 'param3': 31}
/*< 60>*/ 		printf("\x0E\x01\x09\x04\x00\x12Oh nein, ich konnte Kuki immer noch\nnicht finden!\n\n\nIch bitte dich, finde meine kleine Kuki\nso schnell du nur kannst!")
          	  case 1:
/*< 32>*/ 		printf("\x0E\x01\x09\x04\x00\x01Huch! Was kann ich so spät abends für\ndich tun?")
          	}
          }

          void entrypoint_122_30() {
/*<107>*/ 	start()
/*<110>*/ 	set_camera(6, 0)
/*<108>*/ 	printf("Es tut mir leid, aber die Essenszeit ist\nschon vorüber. Du musst wohl bis zum\nMittagessen warten.")
          }

          void entrypoint_122_14() {
/*< 33>*/ 	start()
/*<122>*/ 	switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          	  case 0:
/*<121>*/ 		printf("\x0E\x01\x09\x04\x00\x02Hallo, Link! Kuki ist \nwieder zurück! Du warst es doch, der\nsie gefunden hat, richtig?\n\n\x0E\x01\x09\x04\x10\xD09Ich danke dir! Meine Frau und ich sind\neinfach überglücklich!")
          	  case 1:
/*<118>*/ 		switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          		  case 0:
/*<119>*/ 			printf("\x0E\x01\x09\x04\x0F\xD12Ach, Link... Meine kleine\nKuki ist einfach verschwunden.\n\n\n\x0E\x01\x09\x04ÿ\xFF00Ob sie wirklich entführt wurde? Meine\nEhefrau ist überzeugt davon...\n\n\n\x0E\x01\x09\x04\x10\xD03Aber wie ich Kuki kenne,<pause0A> spielt sie\nwahrscheinlich nur wieder irgendwo...")
/*<120>*/ 			printf("\x0E\x01\x09\x04\x0F\xD00Sag mir Bescheid, wenn du Kuki\ngefunden hast!")
          		  case 1:
/*<171>*/ 			switch (zone_temp_flags[14 /* 0x0 40 */]) {
          			  case 0:
/*<172>*/ 				printf("\x0E\x01\x09\x04\x00\x02Oh, Link!\n\n\n\nDas hier ist der <r<Turm des Lichts>>!\nKlettere doch mal hoch und genieße\ndie tolle Aussicht!")
          			  case 1:
/*< 34>*/ 				printf("\x0E\x01\x09\x04\x00\x02Ah, du bist es, Link! Das\nhier ist der <r<Turm des Lichts>>! Er ist\nquasi unser Wahrzeichen!\n\n\x0E\x01\x09\x04\x0F\xD00Na ja, er leuchtet aber nicht, obwohl\ner Turm des Lichts heißt. Hmmm... Ich\nfrage mich, wozu dieses Ding eigentlich\ngebaut wurde! Und vor allem von wem!\n\x0E\x01\x09\x04\x10\xD00Aber sei's drum, immerhin hat man von\noben einen wirklich ausgezeichneten\nBlick auf die Statue der Göttin!")
/*< 35>*/ 				printf("\x0E\x01\x09\x04\x0F\xD05Ich?!?\n\n\n\n\x0E\x01\x09\x04\x00\x800Nein, ich geh da nicht rauf! Ich habe\ndoch Höhenangst!")
          			}
          		}
          	}
          }

          void entrypoint_122_31() {
/*<123>*/ 	start()
/*<124>*/ 	printf("\x0E\x01\x12\x04\x00dOh! Das ist der Eingang zum Vulkan.\n<pause1E>Ich bin bestimmt schneller am Ziel als\ndu, schleichender grüner Wicht!")
          }

          void entrypoint_122_15() {
/*< 36>*/ 	start()
/*< 44>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 37, 'next': 45, 'param3': 32}
/*< 45>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 38, 'next': 46, 'param3': 32}
/*< 46>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 39, 'next': 62, 'param3': 32}
/*< 62>*/ 	set_camera(1, 0)
/*<179>*/ 	switch (story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */]) {
          	  case 0:
/*<176>*/ 		{'type': 'type3', 'subType': 1, 'param1': 37, 'param2': -1, 'next': 173, 'param3': 16}
/*<173>*/ 		printf("\x0E\x01\x09\x04\x2507\x707Hey, hast du schon gehört? Einer der\nSchüler, der an der Vogelreiter-\nZeremonie teilnimmt, hat seinen\nWolkenvogel verloren!")
/*<177>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 174, 'param3': 16}
/*<174>*/ 		printf("\x0E\x01\x09\x04\x2607\x701Was? Wie kann man denn einen\nWolkenvogel verlieren? Das klingt\nnach einem großen Problem!")
/*<178>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 175, 'param3': 16}
/*<175>*/ 		printf("\x0E\x01\x09\x04\x2707\x702Also ich hab's ja nicht so mit diesen\nWolkenvögeln. Die Krallen machen\nmir irgendwie Angst...")
          	  case 1:
/*< 47>*/ 		{'type': 'type3', 'subType': 1, 'param1': 37, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x2507\x707Heute ist solch ein gutes Wetter und\nwir können es nicht genießen, weil wir\nso beschäftigt sind!")
/*< 48>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 38, 'param3': 16}
/*< 38>*/ 		printf("\x0E\x01\x09\x04\x2607\x701Ich sage es euch! Mein Sohn kommt\ntagtäglich dreckig nach Hause, dieser\nungezogene Bengel!\n\nWie sehr ich seine Sachen auch wasche,\nes ist jeden Tag dasselbe Spiel!")
/*< 49>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 39, 'param3': 16}
/*< 39>*/ 		printf("\x0E\x01\x09\x04\x2707\x702Waschen ist absolut nichts für mich!\nIch wünschte, jemand würde das für\nmich übernehmen.")
          	}
          }

          void entrypoint_122_32() {
/*<180>*/ 	start()
/*<182>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 186, 'param3': 32}
/*<186>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 7, 'next': 187, 'param3': 17}
/*<187>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 183, 'param3': 6}
/*<183>*/ 	{'type': 'type3', 'subType': 1, 'param1': 7, 'param2': 99, 'next': 185, 'param3': 16}
/*<185>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1802, 'param2': 3072, 'next': 184, 'param3': 13}
/*<184>*/ 	set_camera(9, 0)
/*<181>*/ 	printf("\x0E\x01\x09\x04\x70A\xC12Hmmm... \x0E\x01\x08\x02\xFECDWo ist sie bloß hin...")
          }

          void entrypoint_122_16() {
/*< 50>*/ 	start()
/*<152>*/ 	switch (temp_flags[52 /* 0x7 10 */]) {
          	  case 0:
/*<153>*/ 		printf("Es würde mich freuen, wenn du mir\nwieder einmal Gesellschaft leisten\nwürdest.")
          	  case 1:
/*<141>*/ 		printf("Hi hi hi hi... Na, kleiner Mann? Du\nscheinst dich ja mächtig ins Zeug zu\nlegen. Soll ich dich auf ein Getränk\neinladen?\n[1]Gerne![2-]Nein, danke.")
/*<142>*/ 		switch (choice(2)) {
          		  case 0:
/*<144>*/ 			printf("\x0E\x01\x09\x04\x01\x700Das wollte ich hören! Also dann, hoch\ndie Tassen, Jungspund!")
/*<148>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 147, 'param3': 47}
/*<147>*/ 			set_camera(8, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 115, 'next': 150, 'param3': 24}
/*<150>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 149, 'param3': 6}
/*<149>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 159, 'param3': 48}
/*<159>*/ 			make_actor_do_something(0, 0)
/*<145>*/ 			printf("\x0E\x01\x09\x04\x07\x700Dieses Gebräu hier ist ja fantastisch!\nRichtig lecker und fruchtig!")
/*<146>*/ 			set_camera(-1, 0)
/*<154>*/ 			switch (random(4)) {
          			  case 0:
/*<155>*/ 				printf("Ich werde dir einen guten Rat geben,\nkleiner Mann, also hör mir jetzt gut zu.\n\n\nWenn du durchs Wolkenmeer fliegst,\nwirst du manchmal <r<Felsen>> sehen, <r<in\ndenen sich Löcher befinden>>.\n\n\x0E\x01\x09\x04\x01\x700Ich habe gehört, dass sich in diesen\nLöchern Energie ansammelt.\n\n\nWenn du da mit deinem Wolkenvogel\ndurchbretterst, nimmt dein Vögelchen\ndiese Energie in sich auf und... woff!\n\n\x0E\x01\x09\x04\x07\x700Nutze die Energie und fliege schneller\ndurchs Wolkenmeer. Nur dann kannst\ndu dich einen echten Ritter nennen!")
          				flw_151:
/*<151>*/ 				temp_flags[52 /* 0x7 10 */] = true;
          			  case 1:
/*<156>*/ 				printf("Ich werde dir einen guten Rat geben,\nkleiner Mann, also hör mir jetzt gut zu.\n\n\n\x0E\x01\x09\x04\x01\x700Wie hier im Wolkenhort sind über das\nganze Wolkenmeer große und kleine\nInseln verteilt. Sie schweben einfach!\n\nFrag mich aber nicht, was die Inseln in\nder Luft hält... Das weiß ich nicht!\n\n\n\x0E\x01\x09\x04\x07\x700Wie auch immer, eines kann ich dir mit\nSicherheit sagen. Wir haben es nur der\nGöttin zu verdanken, dass wir in Glück\nund Frieden leben dürfen.")
          				goto flw_151
          			  case 2:
          				flw_53:
/*< 53>*/ 				printf("Ho ho ho, sag bloß, dich interessiert,\nwas ich zu sagen habe?\n\n\nIn der Ritterschule, die du besuchst,\nlernt man den richtigen Umgang mit\nWolkenvögeln.\n\nWenn du ein echter Ritter wirst, kannst\ndu dich frei im Wolkenmeer bewegen\nund uns alle beschützen!\n\nVielleicht hast du sie ja auch schon mal\ngetroffen, als du von einer Klippe oder\neinem Abhang gefallen bist!\n\nWen ich meine? Na, unsere Flugretter\nnatürlich!\n\n\n\x0E\x01\x09\x04\x01\x700Sie sind die Elite der Ritterschule! Du\nsolltest auch versuchen, so zu werden\nwie sie!\n\n\x0E\x01\x09\x04\x07\x700Ganz nebenbei, einer von ihnen ist\nzufälligerweise mein Enkel! Ho <pause05>ho <pause05>ho...")
          				goto flw_151
          			  case 3:
/*<158>*/ 				switch (scene_flags[85 /* 0xB 20 */]) {
          				  case 0:
/*<157>*/ 					printf("Ich werde dir einen guten Rat geben,\nkleiner Mann, also hör mir jetzt gut zu.\n\n\nHast du denn schon einmal einen dieser\n<y<Ausdauertränke >>getrunken? Die gibt es\nim Trankladen zu kaufen!\n\n\x0E\x01\x09\x04\x01\x700Diese Wunderdinger sorgen dafür, dass\ndeine Ausdaueranzeige viel langsamer\nabnimmt. Toll, oder?\n\nDu denkst jetzt bestimmt, dass du ihn\nnur dann einsetzen kannst, wenn du\neine lange Strecke laufen möchtest...\n\n\x0E\x01\x09\x04\x07\x700Weit gefehlt! Auch andere deiner\nAktionen wie die Wirbelattacke\nverbrauchen Ausdauer, also ist\ndieser Trank wirklich nützlich!")
          					goto flw_151
          				  case 1:
          					goto flw_53
          				}
          			}
          		  case 1:
/*<143>*/ 			printf("Du willst einem alten Mann wohl nicht\nGesellschaft leisten. Ich verstehe...")
          		}
          	}
          }

          void entrypoint_122_33() {
/*<191>*/ 	start()
/*<192>*/ 	printf("\x0E\x01\x09\x04\x00\x01Hallo, Link! Ich war ja nie\nwirklich ein Nachtmensch, aber seit die\nMonster nicht mehr da sind, gehe ich\neigentlich ganz gerne nachts raus.\nNachts ist es jetzt richtig angenehm\nohne die ganzen Biester!")
          }

          void entrypoint_122_17() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf("Möchtest du auch etwas essen?\nDas Essen hier ist fabelhaft!\n\n\nLeider dauert es eine halbe Ewigkeit,\nbis es serviert wird...")
          }

          void entrypoint_122_00() {
          	start()
/*<  1>*/ 	printf("\x0E\x01\x09\x04\x00\x01Jetzt noch ein wenig Pfeffer dazu...\n\n\n\n\x0E\x01\x09\x04\x00\x04Wunderbar! Schmeckt auch heute\nwieder so, wie es soll!")
          }

          void entrypoint_122_18() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf("\x0E\x01\x09\x04\x00\x04Oh, Link!\nDu siehst richtig müde aus. Aber ich\nverstehe das nur zu gut! Mir geht es\nauch immer so.\n\x0E\x01\x09\x04\x01\xD00Du bist uns jederzeit willkommen, falls\ndu dich etwas ausruhen möchtest.")
          }

