          void entrypoint_400_13() {
/*< 33>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "...")
          }

          void entrypoint_400_65() {
/*<161>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 2, unk: 0, line: 84 */ "Wir sind an der <color blue<Ranelle-Mine\n>coloroff>angekommen.\n\n\nSuche mit der Aurasuche nach dem\nEingang zur Prüfung, die du bestehen\nmusst, um die heilige Flamme zu\nerhalten.")
/*<163>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_30() {
/*<234>*/ 	start()
/*<235>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Du willst hier arbeiten?\nDann nimm deine komische Kappe ab\nund setz einen Helm auf, bzzz!")
/*<244>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_14() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0, line: 16 */ "Hier muss die Lore durch, bzzz!\nGeh aus dem Weg!")
/*< 71>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_66() {
/*<164>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 2, unk: 0, line: 85 */ "Wir sind in der <color blue<Wüste Ranelle\n>coloroff>angekommen.\n\n\nSuche mit der Aurasuche nach dem\nEingang zur Prüfung, die du bestehen\nmusst, um die heilige Flamme zu\nerhalten.")
/*<166>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_31() {
/*<236>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 1, unk: 0, line: 52 */ "...")
          }

          void entrypoint_400_15() {
/*< 37>*/ 	start()
/*<307>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<308>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_38:
/*< 38>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "...")
          		  case 1:
/*<345>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				flw_310:
/*<310>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "...")
          			  case 1:
/*<309>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 310, 'param3': 31}
          				goto flw_310
          			}
          		}
          	  case 1:
          		goto flw_38
          	}
          }

          void entrypoint_400_67() {
/*<167>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 2, unk: 0, line: 86 */ "Wir sind am <color blue<Tempel der Zeit\n>coloroff>angekommen.\n\n\nSuche mit der Aurasuche nach dem\nEingang zur Prüfung, die du bestehen\nmusst, um die heilige Flamme zu\nerhalten.")
/*<169>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_32() {
/*<238>*/ 	start()
/*<239>*/ 	printf(/* textboxtype: 1, unk: 0, line: 53 */ "In letzter Zeit greifen uns komische\nKerle an. Wir haben keine Waffen, um\nuns zu wehren. Die machen uns fertig,\nbzzz!")
/*<245>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_16() {
/*< 39>*/ 	start()
/*<  9>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<311>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<312>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_12:
/*< 12>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "Wie, du bist immer noch da?\nPass auf dich auf, bzzz!")
          			  case 1:
/*<313>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "Du suchst einen Drachen?\n\n\n\n<color blue<<0x10009:0x13030000>>coloroff>Der <color blue<Donnerdrache>coloroff> lebt südlich der\n<color blue<Ranelle-Höhle>coloroff>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
/*<344>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_12
          		}
          	  case 1:
/*<  5>*/ 		switch (story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */]) {
          		  case 0:
          			flw_10:
/*< 10>*/ 			printf(/* textboxtype: 1, unk: 0, line: 20 */ "Jetzt kannst du mit dem Käfer\nObjekte <color red<greifen und festhalten>coloroff>!\n\n\nPass auf dich auf!")
/*< 77>*/ 			scene_flags[7 'Lanayru Desert'][5 /* 0x1 20 */] = true;
/*<283>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<  6>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<277>*/ 				printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x13030000>Du hast mich gerettet, bzzz!")
/*<278>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 279, 'param3': 47}
/*<279>*/ 				set_camera(6, 0)
/*<281>*/ 				{'type': 'type3', 'subType': 2, 'param1': 27, 'param2': 356, 'next': 280, 'param3': 15}
/*<280>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 282, 'param3': 17}
/*<282>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 7, 'param3': 48}
/*<  7>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x13030000>Das war knapp! Beinahe hätten mir die\nKerle den Strom abgeklemmt, bzzz!\n\n\nAber sag mal...<pause 30> Ist das etwa ein <color yellow<Käfer>coloroff>?\nDer kommt von hier, ist aber ein altes\nModell...\n\nWeil du mir geholfen hast, werde ich\ndir dieses <color red<Ding >coloroff>ein wenig verbessern.\n<0x10009:0x13030000>Gib mal her, bzzz!")
/*< 91>*/ 				make_actor_do_something(0, 0)
/*<284>*/ 				{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 8, 'param3': 42}
/*<  8>*/ 				give_item(75 0x4B);
/*< 11>*/ 				story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */] = true;
          				goto flw_10
          			  case 1:
/*<  4>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "Hilf mir, bzzz! Hilfe!")
/*< 76>*/ 				scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
/*<228>*/ 				scene_flags[7 'Lanayru Desert'][28 /* 0x2 10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_400_50() {
/*< 58>*/ 	start()
/*<142>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*< 59>*/ 	printf(/* textboxtype: 2, unk: 0, line: 63 */ "<0x10005:0x005a0000><0x10012:0x0000000b>Gebieter <heroname>, ich habe dir\netwas zu berichten. Wir sind nun in der\n<color blue<Ranelle-Mine >coloroff>angekommen.")
          }

          void entrypoint_400_68() {
/*<170>*/ 	start()
/*<172>*/ 	set_camera(-1, 0)
/*<171>*/ 	printf(/* textboxtype: 2, unk: 0, line: 87 */ "Gut gemacht, <0x10012:0x00000004>Gebieter.")
/*<173>*/ 	printf(/* textboxtype: 2, unk: 0, line: 88 */ "<0x10012:0x00000001>Gebieter, du hast die Prüfung\nbestanden. Mit deinem reinen Herzen\nhast du die Kraft erlangt, die heilige\nFlamme zu finden.")
/*<175>*/ 	set_camera(3, 0)
/*<174>*/ 	printf(/* textboxtype: 2, unk: 0, line: 89 */ "Dieser <color yellow<Greifhaken>coloroff> ist ein Schatz der\nGöttin.\n\n\nNutze die Klaue an der Kette, um dich\nan <color red<Efeu>coloroff> oder <color red<Greifhaken-Zielen>coloroff>\nhochzuziehen.")
/*<177>*/ 	set_camera(-1, 0)
/*<176>*/ 	printf(/* textboxtype: 2, unk: 0, line: 90 */ "Die Flamme befindet sich irgendwo in\nder Wüste... <0x10012:0x00000001>Gebieter, ich vermute sie\nan einem Ort, den du noch nicht\nbetreten hast.")
          }

          void entrypoint_400_33() {
/*<240>*/ 	start()
/*<241>*/ 	printf(/* textboxtype: 1, unk: 0, line: 54 */ "...")
          }

          void entrypoint_400_17() {
/*< 40>*/ 	start()
/*<125>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<216>*/ 		switch (scene_flags[89 /* 0xA 02 */]) {
          		  case 0:
/*<218>*/ 			printf(/* textboxtype: 1, unk: 0, line: 106 */ "<0x10009:0x00162007>Jetzt kann ich das Innere erforschen!\n<0x10009:0x00002000>Und danach will ich zum Siegelhain...\nIch habe zu tun!")
          		  case 1:
/*<126>*/ 			printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00151b09>Du... du warst drinnen?!?\n\n\n\n<0x10009:0x00151b00>Was sagst du?\nEs gibt einen weiteren Geheimgang?\nDas hättest du mir früher sagen sollen!\n\n<0x10009:0x00082100>Ich hatte schon aufgegeben und war\nnach Hause aufgebrochen, aber dann\nhörte ich diesen Lärm und bin\nzurückgekehrt.\n<0x10009:0x00162007>Jetzt kann ich das Innere erforschen!\n<0x10009:0x00002000>Und danach will ich zum Siegelhain...\nIch habe zu tun!")
/*<217>*/ 			scene_flags[7 'Lanayru Desert'][89 /* 0xA 02 */] = true;
          		}
          	  case 1:
/*<150>*/ 		switch (scene_flags[73 /* 0x8 02 */]) {
          		  case 0:
/*<152>*/ 			printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00162007>Ich würde nur zu gerne da hinein...\nOb es denn wirklich keinen anderen\nWeg zum Tempel gibt?")
          		  case 1:
/*< 41>*/ 			printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x00000002>Oh, so trifft man sich wieder!\nIch will dir nicht zu nahe treten, aber\ndich trifft man wirklich an den\nverrücktesten Orten!\n<0x10009:0x00172008>Aber hör mal... Ich habe hier gerade\ndie Entdeckung des Jahrhunderts\ngemacht!\n\n<0x10009:0x00002000>Dies ist der <color blue<Tempel der Zeit>coloroff>, ein sehr\nheiliger Ort. \n\n\n<0x10009:0x0000190a>Und stell dir vor, an diesem Ort habe\nich eine <color red<Bewohnerin der legendären\nInsel der Göttin >coloroff>gesehen!\n\n<0x10009:0x00001900>Ihre Kleider waren ganz so, wie sie die\nalten Schriften schildern...\n\n\n<0x10009:0x00082105>Sie ist mit einer anderen Person in den\nTempel gegangen. Ich wollte ihnen\nfolgen...\n\n<0x10009:0x00151b00>Aber da gab es eine Explosion! Und das\nResultat siehst du ja...\n<0x10009:0x00162007>Jetzt kommt hier keiner mehr durch.\n\nUnd dabei wüsste ich nur zu gerne, was\nsie da gesucht haben...")
/*<151>*/ 			scene_flags[7 'Lanayru Desert'][73 /* 0x8 02 */] = true;
          		}
          	}
          }

          void entrypoint_400_51() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 2, unk: 0, line: 67 */ "An diesem Ort hat sich die Zeit\nverändert.\n\n\nAls du den blauen Stein getroffen hast,\nsind wir in der Zeit zurückgewandert.\n<sound 4>Ich schätze, dass wir uns hier in der\n<color red<Vergangenheit>coloroff> befinden.")
          }

          void entrypoint_400_69() {
/*<207>*/ 	start()
/*<208>*/ 	printf(/* textboxtype: 8, unk: 0, line: 108 */ "Sicherheit geht vor!\nHelft, Unfälle zu vermeiden!\n	Die Bauleitung")
          }

          void entrypoint_400_34() {
/*<242>*/ 	start()
/*<243>*/ 	printf(/* textboxtype: 1, unk: 0, line: 55 */ "Du interessierst dich für die Steine\nder Zeit? Dann musst du ins\n<color blue<Ranelle-Steinwerk>coloroff>.")
/*<246>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_52() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 2, unk: 0, line: 69 */ "Ich spüre in dieser Gegend etwas, das\ndem <color blue<Hauptschalter>coloroff> ähnlich ist.\nSpüre es mit der <sound 4><color red<Aurasuche >coloroff>auf.")
/*<220>*/ 	story_flags[107 /* us: 805A9AE1 0x01, jp: 805ACD61 0x01 */] = true;
/*<294>*/ 	open_dowsing_wheel(3)
/*<268>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_35() {
/*<247>*/ 	start()
/*<248>*/ 	printf(/* textboxtype: 1, unk: 0, line: 56 */ "...")
          }

          void entrypoint_400_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "...")
          }

          void entrypoint_400_19() {
/*< 42>*/ 	start()
/*<314>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<315>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "...")
          		  case 1:
/*<347>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_43
          			  case 1:
/*<316>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 43, 'param3': 31}
          				goto flw_43
          			}
          		}
          	  case 1:
          		goto flw_43
          	}
          }

          void entrypoint_400_53() {
/*< 92>*/ 	start()
/*<113>*/ 	story_flags[109 /* us: 805A9AE1 0x04, jp: 805ACD61 0x04 */] = true;
/*<114>*/ 	printf(/* textboxtype: 2, unk: 0, line: 77 */ "")
/*<159>*/ 	set_camera(1, 0)
/*<160>*/ 	printf(/* textboxtype: 2, unk: 0, line: 78 */ "")
/*<178>*/ 	set_camera(-1, 0)
/*<179>*/ 	printf(/* textboxtype: 2, unk: 0, line: 79 */ "")
          }

          void entrypoint_400_70() {
/*<209>*/ 	start()
/*<210>*/ 	printf(/* textboxtype: 8, unk: 0, line: 109 */ "Angeplante Fördermenge: \n150 Kisten\n	Die Bauleitung")
          }

          void entrypoint_400_36() {
/*<249>*/ 	start()
/*<250>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "Die Steine der Zeit bewegen uns und\nunsere Maschinen. Ihre Energie\nsprengt jede Skala!")
/*<259>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "")
/*< 72>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_54() {
/*<100>*/ 	start()
/*<205>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<206>*/ 		printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x2f080709><heroname>!\nDu hast das Heim des Donnerdrachen\nbetreten!<pause 84>\n\n<0x10009:0x2f010805><0x10008:0x02cd>Und dabei wollte ich der\nErste sein...<pause 90>\n\n\n<0x10009:0x2f0f0706><0x10008:0x02cd>Das Leben ist ungerecht zu\nso großen Kerlen wie mir...")
          		flw_149:
/*<149>*/ 		scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
/*<269>*/ 		story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<270>*/ 		story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<271>*/ 		story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<272>*/ 		story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          	  case 1:
/*<109>*/ 		switch (scene_flags[75 /* 0x8 08 */]) {
          		  case 0:
/*<111>*/ 			printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x2f080d0a>Ich habe einen Weg zum Heim des\n<color red<Donnerdrachen>coloroff> gefunden!<pause 45>\n\n\n<0x10006:0xffcd><0x10009:0x2f0d0800>Leider ist der Zugang zu eng für mich.\n<0x10006:0xffcd><0x10009:0x2f080700>Irgendwas müsste doch zu machen\nsein...")
          			goto flw_149
          		  case 1:
/*<112>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 105, 'param3': 31}
/*<105>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<275>*/ 				printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x2f080d02>Ohoho, <heroname>!")
/*<276>*/ 				set_camera(5, 0)
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 98 */ "Was ist mit der <color blue<heiligen Flamme>coloroff>, von\nder du erzählt hast? Hast du sie denn\ngefunden?\n\nIch bin so neugierig! Erzähle mir doch\nbitte, was dir widerfahren ist!\n\n\n<0x10009:0x2f080407>Hmmm.<pause 20>.<pause 20>.<pause 20> Eine steinharte Geschichte,\ndie du mir da erzählst!\n\n\nDu bist wirklich beeindruckend,\n<heroname>!")
/*<358>*/ 				printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x2f080d0a>Ich kann dir etwas von der Legende der\ndrei Drachen erzählen.<pause 15>\n\n\nEs gibt tatsächlich einen verborgenen\nOrt in der Wüste vor uns!\n\n\nIch habe nämlich einen <color red<kleinen Gang>coloroff><sound 4>\ngefunden!\n\n\n<0x10009:0x2f000d00>Ich glaube, dass der <color red<Donnerdrache>coloroff>,\neiner der drei mystischen Drachen der\nLegende, dort sein Zuhause hat.\n\n<0x10009:0x2f000800>Ich bin mir ziemlich sicher, dass eine\nVerbindung zwischen ihm und den\nRobotern hier besteht!<pause 15>\n\n<0x10009:0x2f010807><0x10006:0xffcd>Der <color red<Donnerdrache>coloroff>, die Roboter,\ndie Steine der Zeit<pause 20>.<pause 20>.<pause 20>.<pause 20>\n\n\n<0x10009:0x2f080708><0x10008:0x02cd>Was für ein Mysterium!")
/*<107>*/ 				printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00080d00>Gut, dass ich dich hier antreffe,\n<heroname>!\n\n\nErinnerst du dich? Du hast mir doch\nvor einiger Zeit ein paar Rubine für\nmeine Forschung gegeben.<pause 20>\n\nIch habe hier Steine der Zeit gefunden.\nJetzt habe ich finanziell ausgesorgt!\n<0x10009:0x2f000d01>Ich gebe dir das Zehnfache von dem\nzurück, was du mir gegeben hast!")
/*<106>*/ 				rupees += 100;
          				flw_285:
/*<285>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 110, 'param3': 42}
/*<110>*/ 				scene_flags[7 'Lanayru Desert'][75 /* 0x8 08 */] = true;
          				goto flw_149
          			  case 1:
/*<273>*/ 				printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x2f080d02>Ohoho, <heroname>!")
/*<274>*/ 				set_camera(5, 0)
/*<211>*/ 				printf(/* textboxtype: 1, unk: 0, line: 98 */ "Was ist mit der <color blue<heiligen Flamme>coloroff>, von\nder du erzählt hast? Hast du sie denn\ngefunden?\n\nIch bin so neugierig! Erzähle mir doch\nbitte, was dir widerfahren ist!\n\n\n<0x10009:0x2f080407>Hmmm.<pause 20>.<pause 20>.<pause 20> Eine steinharte Geschichte,\ndie du mir da erzählst!\n\n\nDu bist wirklich beeindruckend,\n<heroname>!")
/*<359>*/ 				printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x2f080d0a>Ich kann dir etwas von der Legende der\ndrei Drachen erzählen.<pause 15>\n\n\nEs gibt tatsächlich einen verborgenen\nOrt in der Wüste vor uns!\n\n\nIch habe nämlich einen <color red<kleinen Gang>coloroff><sound 4>\ngefunden!\n\n\n<0x10009:0x2f000d00>Ich glaube, dass der <color red<Donnerdrache>coloroff>,\neiner der drei mystischen Drachen der\nLegende, dort sein Zuhause hat.\n\n<0x10009:0x2f000800>Ich bin mir ziemlich sicher, dass eine\nVerbindung zwischen ihm und den\nRobotern hier besteht!<pause 15>\n\n<0x10009:0x2f010807><0x10006:0xffcd>Der <color red<Donnerdrache>coloroff>, die Roboter,\ndie Steine der Zeit<pause 20>.<pause 20>.<pause 20>.<pause 20>\n\n\n<0x10009:0x2f080708><0x10008:0x02cd>Was für ein Mysterium!")
          				goto flw_285
          			}
          		}
          	}
          }

          void entrypoint_400_71() {
/*<213>*/ 	start()
/*<214>*/ 	printf(/* textboxtype: 2, unk: 0, line: 91 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas\nzu berichten.")
/*<298>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 299, 'param3': 30}
/*<299>*/ 	printf(/* textboxtype: 2, unk: 0, line: 92 */ "Die Symbole auf den Hebeln dieses\nHauptschalters stimmen mit denen\nder drei bereits betätigten Schalter\nüberein.\nIch gehe davon aus, dass zwischen\nihnen ein Zusammenhang besteht.")
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          }

          void entrypoint_400_37() {
/*<251>*/ 	start()
/*<252>*/ 	printf(/* textboxtype: 1, unk: 0, line: 58 */ "...")
          }

          void entrypoint_400_03() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "...")
          }

          void entrypoint_400_20() {
/*< 44>*/ 	start()
/*< 63>*/ 	switch (scene_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<317>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<318>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_66:
/*< 66>*/ 				printf(/* textboxtype: 1, unk: 0, line: 26 */ "Der Tempel der Zeit ist wirklich\nwunderschön. Ich könnte jedes Mal\nbzzzen, wenn ich ihn sehe...")
          			  case 1:
/*<319>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "Du suchst einen Drachen?\n\n\n\n<color blue<<0x10009:0x13030000>>coloroff>Der <color blue<Donnerdrache>coloroff> lebt südlich der\n<color blue<Ranelle-Höhle>coloroff>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
/*<346>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_66
          		}
          	  case 1:
/*< 94>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*< 96>*/ 			printf(/* textboxtype: 1, unk: 0, line: 28 */ "Uff, das war knapp, bzzz!\nDanke für deine Hilfe!")
/*< 93>*/ 			make_actor_do_something(1, 0)
/*< 45>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00030900>Dies ist der <color blue<Tempel der Zeit>coloroff>.\nAn diesem Ort befindet sich das\n<color blue<Zeitportal>coloroff>, das die Göttin erschuf.\n\n<0x10009:0x00030900>Wir halten die Umgebung des Tempels\nsauber. Zum Zeitportal gelangst du\ndurch das Tor, bzzz!\n\n<0x10009:0x00030900>Was meinst du? Du suchst einen\nanderen Weg?\n\n\n<0x10009:0x00030900>Nun, der <color blue<Tempel der Zeit>coloroff> ist mit dem\n<color blue<Ranelle-Steinwerk>coloroff> durch einen\n<color red<unterirdischen Gang>coloroff> verbunden.\nDas Steinwerk ist hier!")
/*<202>*/ 			make_actor_do_something(2, 0)
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 30}
/*<215>*/ 			wait_frames(30)
/*< 90>*/ 			scene_flags[7 'Lanayru Desert'][3 /* 0x1 08 */] = true;
/*< 99>*/ 			wait_frames(30)
/*< 97>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "Nanu? Diese Karte hat Fehler. Ich\nrepariere sie.")
/*< 64>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 3, 'next': 197, 'param3': 30}
/*<197>*/ 			{'type': 'type3', 'subType': 2, 'param1': 9, 'param2': 356, 'next': 67, 'param3': 15}
/*< 67>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 200, 'param3': 34}
/*<200>*/ 			set_camera(4, 0)
/*<199>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 65, 'param3': 17}
/*< 65>*/ 			printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00030900>Das Ranelle-Steinwerk ist da vorne.")
/*<203>*/ 			make_actor_do_something(3, 0)
/*< 68>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 0, 'next': 89, 'param3': 14}
/*< 89>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 101, 'param3': 17}
/*<101>*/ 			story_flags[129 /* us: 805A9AED 0x40, jp: 805ACD6D 0x40 */] = true;
/*<196>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
/*<198>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 201, 'param3': 17}
/*<201>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 204, 'param3': 42}
/*<204>*/ 			make_actor_do_something(4, 0)
          		  case 1:
/*< 95>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "Hilfe!")
/*<127>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
          		}
          	}
          }

          void entrypoint_400_55() {
/*<102>*/ 	start()
/*<286>*/ 	printf(/* textboxtype: 2, unk: 0, line: 70 */ "<0x10012:0x00000001>Gebieter, ich habe dir etwas zu\nberichten. Ich spüre <color blue<Zeldas>coloroff> Aura\nnicht mehr.")
/*<287>*/ 	set_camera(7, 0)
/*<288>*/ 	printf(/* textboxtype: 2, unk: 0, line: 71 */ "Als dieses Portal zerstört wurde, habe\nich Zeldas Aura plötzlich verloren.\n<sound 4><color red<Du kannst sie mit der Aurasuche nicht\nmehr aufspüren>coloroff>.")
/*<289>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf(/* textboxtype: 2, unk: 0, line: 72 */ "Zeldas Begleiterin sagte, du solltest\ndie Hüterin des Siegelhains treffen...\n\n\nIch schlage vor, dass du dich zum\n<color blue<Tempel des Siegels>coloroff> begibst.")
/*<104>*/ 	scene_flags[7 'Lanayru Desert'][57 /* 0x6 02 */] = true;
/*<219>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = false;
/*<290>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_400_72() {
/*<221>*/ 	start()
/*<222>*/ 	printf(/* textboxtype: 8, unk: 0, line: 110 */ "Putzplan für den Tempel\n	Die Bauleitung")
          }

          void entrypoint_400_38() {
/*<253>*/ 	start()
/*<254>*/ 	printf(/* textboxtype: 1, unk: 0, line: 59 */ "Was macht ein Mensch an diesem Ort?\nSuchst du etwa Steine der Zeit, bzzz?")
/*<260>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_04() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "")
/*< 73>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_21() {
/*< 46>*/ 	start()
/*<320>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<321>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_47:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "...")
          		  case 1:
/*<349>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_47
          			  case 1:
/*<322>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 47, 'param3': 31}
          				goto flw_47
          			}
          		}
          	  case 1:
          		goto flw_47
          	}
          }

          void entrypoint_400_56() {
/*<128>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0, line: 107 */ "")
          }

          void entrypoint_400_73() {
/*<223>*/ 	start()
/*<224>*/ 	printf(/* textboxtype: 8, unk: 0, line: 111 */ "Keine Chance der Dürre!\nMachen wir Ranelle grüner!\n	Die Bauleitung")
          }

          void entrypoint_400_39() {
/*<255>*/ 	start()
/*<256>*/ 	printf(/* textboxtype: 1, unk: 0, line: 60 */ "...")
          }

          void entrypoint_400_05() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "")
          }

          void entrypoint_400_22() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[103 /* 0xD 80 */]) {
          	  case 0:
/*< 79>*/ 		switch (scene_flags[30 /* 0x2 40 */]) {
          		  case 0:
/*<323>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<324>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_81:
/*< 81>*/ 					switch (scene_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*< 83>*/ 						printf(/* textboxtype: 1, unk: 0, line: 34 */ "Dies ist das <color blue<Ranelle-Steinwerk>coloroff>!\nIn ihm stellen wir die Steine der Zeit\nher.\n\n<0x10009:0x13030000>Immer wieder ein toller Anblick, bzzz!")
          					  case 1:
/*< 82>*/ 						printf(/* textboxtype: 1, unk: 0, line: 33 */ "Du hast die Kombination gefunden?\nNicht zu fassen!\n\n\n<0x10009:0x13030000>Dies ist das <color blue<Ranelle-Steinwerk>coloroff>!\nIn ihm stellen wir die Steine der Zeit\nher.\n\n<0x10009:0x13030000>Immer wieder ein toller Anblick, bzzz!")
/*< 84>*/ 						scene_flags[7 'Lanayru Desert'][8 /* 0x0 01 */] = true;
          						flw_85:
/*< 85>*/ 						scene_flags[7 'Lanayru Desert'][35 /* 0x5 08 */] = true;
          					}
          				  case 1:
/*<325>*/ 					printf(/* textboxtype: 1, unk: 0, line: 62 */ "Du suchst einen Drachen?\n\n\n\n<color blue<<0x10009:0x13030000>>coloroff>Der <color blue<Donnerdrache>coloroff> lebt südlich der\n<color blue<Ranelle-Höhle>coloroff>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
/*<348>*/ 					story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          				}
          			  case 1:
          				goto flw_81
          			}
          		  case 1:
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "Du hast die richtige Kombination\ngefunden? Doch damit alleine wirst du\ndas Steinwerk nicht betreten können,\nbzzz...")
          			goto flw_85
          		}
          	  case 1:
/*< 49>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "Wer bist du, bzzz?\n\n\n\n<0x10009:0x13030000>Dies ist der Hauptschalter zum\nEingang des Ranelle-Steinwerks. \n\n\n<0x10009:0x13030000>Nur eine bestimmte <color red<Kombination der\ndrei Zeiger >coloroff>wird dieses Tor öffnen!")
/*< 86>*/ 		scene_flags[7 'Lanayru Desert'][34 /* 0x5 04 */] = true;
          	}
          }

          void entrypoint_400_57() {
/*<130>*/ 	start()
/*<131>*/ 	printf(/* textboxtype: 2, unk: 0, line: 64 */ "<0x10005:0x005a0000>Seit Hunderten von Jahren wird diese\nGegend nach und nach zu einer Wüste.")
          }

          void entrypoint_400_74() {
/*<229>*/ 	start()
/*<230>*/ 	switch (scene_flags[11 /* 0x0 08 */]) {
          	  case 0:
          	  case 1:
/*< 62>*/ 		printf(/* textboxtype: 2, unk: 0, line: 66 */ "Dieser Roboter scheint schon sehr \nlange nicht mehr zu funktionieren.\nIch verstehe nicht, was er uns sagen\nwill...")
/*<231>*/ 		scene_flags[7 'Lanayru Desert'][11 /* 0x0 08 */] = true;
          	}
          }

          void entrypoint_400_06() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0, line: 7 */ "")
/*< 74>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_23() {
/*< 50>*/ 	start()
/*<326>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<327>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "...")
          		  case 1:
/*<351>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_51
          			  case 1:
/*<328>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 51, 'param3': 31}
          				goto flw_51
          			}
          		}
          	  case 1:
          		goto flw_51
          	}
          }

          void entrypoint_400_58() {
/*<132>*/ 	start()
/*<133>*/ 	printf(/* textboxtype: 2, unk: 0, line: 65 */ "<0x10005:0x005a0000>Ich schätze, dass <color blue<Zelda>coloroff> hierher\ngekommen und bereits vorausgeeilt ist.")
/*<267>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<266>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_40() {
/*<257>*/ 	start()
/*<258>*/ 	printf(/* textboxtype: 1, unk: 0, line: 61 */ "Vor Kurzem wurde einer meiner\nFreunde entführt! Man munkelt, dass\ndiese Kerle uns die Energie abzapfen...\nWie schrecklich!")
/*<261>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_75() {
/*<291>*/ 	start()
/*<292>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 2, 'next': 293, 'param3': 40}
/*<293>*/ 	wait_frames(45)
          }

          void entrypoint_400_07() {
/*< 21>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 1, unk: 0, line: 8 */ "...")
          }

          void entrypoint_400_24() {
/*< 52>*/ 	start()
/*<186>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<329>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<330>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_187:
/*<187>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "Du hast die Kombination gefunden?\nNicht zu fassen!")
          			  case 1:
/*<331>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "Du suchst einen Drachen?\n\n\n\n<color blue<<0x10009:0x13030000>>coloroff>Der <color blue<Donnerdrache>coloroff> lebt südlich der\n<color blue<Ranelle-Höhle>coloroff>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
/*<350>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_187
          		}
          	  case 1:
/*<115>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*<116>*/ 			printf(/* textboxtype: 1, unk: 0, line: 37 */ "Bzzz!\nWas soll das denn?\n\n\n<0x10009:0x13030000>Glaube ja nicht, dass dich die richtige\nKombination alleine ins Steinwerk\nbringt!")
          			flw_155:
/*<155>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
/*<157>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<180>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 53>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "Du suchst die richtige Kombination,\num in das Ranelle-Steinwerk\neinzudringen?\n\n<0x10009:0x13030000>Du siehst komisch aus!\nKomischen Kerlen verraten wir nichts!\n\n\n<0x10009:0x13030000>Fass den Mechanismus bloß nicht an!\nUnd nicht hineinstechen, bzzz!")
          				goto flw_155
          			  case 1:
/*<181>*/ 				printf(/* textboxtype: 1, unk: 0, line: 38 */ "Du siehst verdächtig aus, bzzz!\n\n\n\n<0x10009:0x13030000>Fass den Mechanismus bloß nicht an!\nUnd nicht hineinstechen!")
          				goto flw_155
          			}
          		}
          	}
          }

          void entrypoint_400_59() {
/*<134>*/ 	start()
/*<143>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<135>*/ 	printf(/* textboxtype: 2, unk: 0, line: 73 */ "<0x10005:0x005a0000>Wir sind in der <color blue<Wüste >coloroff><color blue<Ranelle\n>coloroff>angekommen. Eine große Dürre hat\nden gesamten Landstrich vollkommen\nverändert.")
          }

          void entrypoint_400_76() {
/*<295>*/ 	start()
/*<296>*/ 	printf(/* textboxtype: 2, unk: 0, line: 86 */ "Wir sind am <color blue<Tempel der Zeit\n>coloroff>angekommen.\n\n\nSuche mit der Aurasuche nach dem\nEingang zur Prüfung, die du bestehen\nmusst, um die heilige Flamme zu\nerhalten.")
/*<297>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_08() {
/*< 23>*/ 	start()
/*<225>*/ 	switch (scene_flags[29 /* 0x2 20 */]) {
          	  case 0:
/*<226>*/ 		printf(/* textboxtype: 1, unk: 0, line: 10 */ "Die blauen Steine sind gefährlich und\nnix für Menschen. Rühr sie nicht an\nund störe uns nicht bei der Arbeit!")
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "Wo kommst du denn her?\nWir sammeln hier die Steine der Zeit.\nDie tragen wir zum <color blue<Ranelle-Steinwerk>coloroff>.\n\n<0x10009:0x13030000>Die Steine sind gefährlich und nix\nfür Menschen. Rühr sie nicht an!")
/*<227>*/ 		scene_flags[7 'Lanayru Desert'][29 /* 0x2 20 */] = true;
/*< 75>*/ 		scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          	}
          }

          void entrypoint_400_25() {
/*< 54>*/ 	start()
/*<332>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<333>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_55:
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 0, line: 40 */ "...")
          		  case 1:
/*<353>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_55
          			  case 1:
/*<334>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 31}
          				goto flw_55
          			}
          		}
          	  case 1:
          		goto flw_55
          	}
          }

          void entrypoint_400_77() {
/*<301>*/ 	start()
/*<302>*/ 	printf(/* textboxtype: 2, unk: 0, line: 93 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu\nberichten. Du hast die richtige\nKombination der drei Schalter\ngefunden.\nBegib dich nun zum <color red<Hauptschalter>coloroff> am\n<color blue<Ranelle-Steinwerk>coloroff>.\n")
          }

          void entrypoint_400_09() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 11 */ "...")
          }

          void entrypoint_400_26() {
/*< 56>*/ 	start()
/*<188>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<335>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<336>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_189:
/*<189>*/ 				printf(/* textboxtype: 1, unk: 0, line: 44 */ "Du hast die Kombination\nherausbekommen? Nicht zu fassen!")
          			  case 1:
/*<337>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "Du suchst einen Drachen?\n\n\n\n<color blue<<0x10009:0x13030000>>coloroff>Der <color blue<Donnerdrache>coloroff> lebt südlich der\n<color blue<Ranelle-Höhle>coloroff>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
/*<352>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_189
          		}
          	  case 1:
/*<117>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*<118>*/ 			printf(/* textboxtype: 1, unk: 0, line: 42 */ "Bzzz!\nWas machst du da?\n\n\n<0x10009:0x13030000>Mit der richtigen Kombination alleine\nkommst du dort nicht rein!")
          			flw_153:
/*<153>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<158>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<182>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 57>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Du suchst die richtige Kombination,\num in das Ranelle-Steinwerk\neinzudringen?\n\n<0x10009:0x13030000>Du siehst komisch aus!\nKomischen Kerlen verraten wir nichts!\n\n\n<0x10009:0x13030000>Fass den Mechanismus bloß nicht an!\nUnd nicht hineinstechen, bzzz!")
          				goto flw_153
          			  case 1:
/*<183>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "Du siehst verdächtig aus, bzzz!\n\n\n\n<0x10009:0x13030000>Fass den Mechanismus bloß nicht an!\nUnd nicht hineinstechen!")
          				goto flw_153
          			}
          		}
          	}
          }

          void entrypoint_400_60() {
/*<136>*/ 	start()
/*<137>*/ 	printf(/* textboxtype: 2, unk: 0, line: 74 */ "<0x10005:0x005a0000>Ich stelle eine erhöhte Konzentration\nvon gefährlichem <color red<Treibsand>coloroff> fest. \nDas Gefahrenpotenzial steigt um 30 %.")
          }

          void entrypoint_400_78() {
/*<303>*/ 	start()
/*<304>*/ 	printf(/* textboxtype: 2, unk: 0, line: 94 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu\nberichten. Ich schätze, dass es\nnotwendig ist, dieses <color red<Gerät>coloroff> mit\nStrom zu versorgen.")
          }

          void entrypoint_400_27() {
/*<119>*/ 	start()
/*<338>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<339>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_120:
/*<120>*/ 			printf(/* textboxtype: 1, unk: 0, line: 45 */ "...")
          		  case 1:
/*<355>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_120
          			  case 1:
/*<340>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 120, 'param3': 31}
          				goto flw_120
          			}
          		}
          	  case 1:
          		goto flw_120
          	}
          }

          void entrypoint_400_61() {
/*<138>*/ 	start()
/*<139>*/ 	printf(/* textboxtype: 2, unk: 0, line: 75 */ "<0x10005:0x005a0000>Ich empfehle, (+) zu drücken,\num auf deiner Karte die\n<sound 4><color red<Bodenbeschaffenheit>coloroff> zu prüfen.<0x10011:0x03cd>")
          }

          void entrypoint_400_79() {
/*<305>*/ 	start()
/*<306>*/ 	printf(/* textboxtype: 2, unk: 0, line: 80 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas\nzu berichten.\n\n\nDie Übereinstimmung deiner Karte mit\nder derzeitigen Umgebung beträgt\n35 %. Der Unterschied ist beträchtlich.\n\nIch schätze, dass die WR-301-Einheit\nvorhin die Karte an das <color red<frühere\nLandschaftsbild>coloroff><sound 4> angepasst hat.")
          }

          void entrypoint_400_10() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "Die Lore ist für die Steine der Zeit\ngedacht. Menschen haben nichts da\ndrinnen verloren! Verzieh dich! Bzzz!")
/*< 69>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_28() {
/*<121>*/ 	start()
/*<190>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<341>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<342>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				printf(/* textboxtype: 1, unk: 0, line: 49 */ "Du hast die Kombination\nherausbekommen?\nNicht zu fassen!")
          			  case 1:
/*<343>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "Du suchst einen Drachen?\n\n\n\n<color blue<<0x10009:0x13030000>>coloroff>Der <color blue<Donnerdrache>coloroff> lebt südlich der\n<color blue<Ranelle-Höhle>coloroff>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
/*<354>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_191
          		}
          	  case 1:
/*<123>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<124>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "Bzzz!\nWas machst du da?\n\n\n<0x10009:0x13030000>Mit der richtigen Kombination alleine\nkommst du dort nicht rein!")
          			flw_154:
/*<154>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<156>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
          		  case 1:
/*<184>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<122>*/ 				printf(/* textboxtype: 1, unk: 0, line: 46 */ "Du suchst die richtige Kombination,\num in das Ranelle-Steinwerk\neinzudringen?\n\n<0x10009:0x13030000>Du siehst komisch aus!\nKomischen Kerlen verraten wir nichts!\n\n\n<0x10009:0x13030000>Fass den Mechanismus bloß nicht an!\nUnd nicht hineinstechen, bzzz!")
          				goto flw_154
          			  case 1:
/*<185>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "Du siehst verdächtig aus, bzzz!\n\n\n\n<0x10009:0x13030000>Fass den Mechanismus bloß nicht an!\nUnd nicht hineinstechen!")
          				goto flw_154
          			}
          		}
          	}
          }

          void entrypoint_400_62() {
/*<140>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 2, unk: 0, line: 76 */ "<0x10005:0x005a0000>Ich schätze, dass <color blue<Zelda>coloroff> hier war.\nWie ich bereits sagte, birgt diese\nGegend Gefahren für dich.\n\n<0x10005:0x005a0000>Ich empfehle, sie bald zu treffen,\num zu erfahren, aus welchem\nGrund sie nach <color blue<Eldin>coloroff> gereist ist.")
          }

          void entrypoint_400_11() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "...")
          }

          void entrypoint_400_63() {
/*<144>*/ 	start()
/*<145>*/ 	printf(/* textboxtype: 2, unk: 0, line: 81 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas\nzu berichten.\n\n\n<0x10012:0x00000002>Gebieter, du stehst auf Treibsand,\nohne zu versinken. Ich empfehle dir,\ndie Karte zu konsultieren.")
/*<192>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 261, 'next': 193, 'param3': 30}
/*<193>*/ 	printf(/* textboxtype: 2, unk: 0, line: 82 */ "An dieser Stelle verlief einst eine\nStraße, die nun durch den Treibsand\nverdeckt wird.\n\nEs scheint, als könntest du hier laufen,\nohne zu versinken.\n\n\nIch empfehle, Signallichter auf der\nKarte zu setzen, um den Weg zu\nmarkieren.")
/*<212>*/ 	printf(/* textboxtype: 2, unk: 0, line: 83 */ "Ich empfehle, <color blue<mehrere>coloroff><sound 4> Signallichter\nzu setzen.")
/*<195>*/ 	story_flags[745 /* us: 805A9B29 0x02, jp: 805ACDA9 0x02 */] = true;
/*<194>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          }

          void entrypoint_400_29() {
/*<232>*/ 	start()
/*<233>*/ 	printf(/* textboxtype: 1, unk: 0, line: 50 */ "...")
          }

          void entrypoint_400_80() {
/*<356>*/ 	start()
/*<357>*/ 	printf(/* textboxtype: 2, unk: 0, line: 95 */ "<color blue<Wüstengras>coloroff> kannst du in der Wüste\nRanelle und anderen Orten finden.\nEs rollt über den Boden und kann für\nallerlei Dinge verwendet werden.\nWenn du es siehst, fange es schnell mit\ndeinem <color red<Schmetterlingsnetz>coloroff> ein.")
          }

          void entrypoint_400_12() {
/*< 31>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "Quatsch uns nicht von der Seite an!\nDu störst uns bei der Arbeit!")
/*< 70>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_64() {
/*<146>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x2f0c0d01><0x10006:0xffcd><0x10008:0x01cd><0x10009:0x2f000001>Du bist doch <heroname>?\nWusste ich's doch! <0x10006:0xffcd><0x10008:0x01cd>Schön, dich\nzu sehen!<pause 15>\n\nDu kommst mir wie gerufen!<pause 15>\n\n\n\n<0x10006:0x02cd><0x10008:0x01cd>Komm mal rauf zu mir!")
/*<148>*/ 	scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
/*<262>*/ 	story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<263>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<264>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<265>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

