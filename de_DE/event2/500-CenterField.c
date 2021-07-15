          void entrypoint_500_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x09\x04C\x4500Was war das denn?\nDu musst schon zielen, wenn du den\nKerl treffen willst!\n\n\x0E\x01\x09\x04A\x4000Ich lege dann mal das nächste\nGeschoss ein. Sag mir Bescheid,\nwenn es losgehen soll!")
          }

          void entrypoint_500_37() {
/*< 49>*/ 	start()
/*< 61>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<435>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*<436>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ich werde nun noch etwas diese\nStatue untersuchen.")
          		  case 1:
/*<427>*/ 			printf("\x0E\x01\x09\x04\x08\xB07Den alten Schriften zufolge liegt\nirgendwo in den Wolken die <r<Insel\nder Göttin>>.\n\nDiese alten Statuen dienten angeblich\neinst dazu, zu dieser Insel der Göttin\nzurückzukehren.\n\nUnd diese Statue hier hat angeblich\ndie besondere Kraft, all die anderen\nStatuen, die es hier gibt, zu <r<erwecken>>.\n\n\x0E\x01\x09\x04\x16\x1900Es mag wie ein Märchen klingen,\naber ich glaube daran.\n\n\n\x0E\x01\x09\x04\x00\xB04Wie könnte man sonst den Umstand\nerklären, dass sie überall in dieser\nWelt verstreut herumstehen?")
          			flw_62:
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x18\x1700Langweile ich dich mit meinen\nErzählungen? Oder willst du mehr\nhören?\n[1]Gerne![2-]Jetzt nicht.")
/*<423>*/ 			switch (choice(2)) {
          			  case 0:
/*<424>*/ 				printf("\x0E\x01\x09\x04\x15\x1902Oho!\nKennst du auch die alten Legenden?\n\n\n\x0E\x01\x09\x04\x16\xB00Ich kann dir von ihnen berichten...\n\n\n\nMan sagt, die Bewohner der Insel\nder Göttin flögen auf Vögeln durch\ndie Lüfte!\n\n\x0E\x01\x09\x04\x00\x1E00Ein friedliches Inselreich, dessen\nBewohner der Göttin treu ergeben\nsind...\n\n\x0E\x01\x09\x04\x00\xB00Ich glaube wirklich, dass uns diese\nKultur um einige Felslängen voraus ist!")
/*<426>*/ 				printf("\x0E\x01\x09\x04\x08\xB00Aber halt! Das ist noch nicht alles!\nDas wirklich Interessante kommt\nerst noch...\n\n\x0E\x01\x09\x04\x1F\x1E00Da die Göttin selbst diese Insel\ngeschaffen hat, ist sie voller\nDinge, die uns hier unten wie\nWunder erscheinen mögen!\n\x0E\x01\x09\x04\x00\x1908Alle Gebäude dort sind aus massivem\nGold! Heiliges Wasser fließt aus nie\nversiegenden Quellen, und wer es\ntrinkt, wird ewig leben, heißt es!\n\x0E\x01\x09\x04\x00\xB00Die Früchte der Bäume heilen alle\nKrankheiten, und die Kürbisse auf den\nFeldern werden nie schlecht. Unzählige\nBlumenarten sollen dort wachsen!\n\x0E\x01\x09\x04\x17\x1900Es ist dort weder heiß noch kalt,\nsondern man lebt in einem ewigen\nFrühling! Dies ist die Insel der Göttin.\n\n\x0E\x01\x09\x04\x00\xB05\x0E\x01\x08\x02\x1CDWas meinst du, ist das nicht\nsteinhart?\n\n\n\x0E\x01\x09\x04!\x1806\x0E\x01\x08\x02\x2CDWillst du noch mehr hören?\n\n\n\n\x0E\x01\x08\x02\x1CDWas meinst du?\n[1]Gerne![2-]Es reicht.")
/*<434>*/ 				scene_flags[10 'Sealed Grounds'][109 /* 0xC 20 */] = true;
/*<430>*/ 				switch (choice(2)) {
          				  case 0:
/*<428>*/ 					printf("\x0E\x01\x09\x04'\x1956Ach so!\nDann hat also auch dich das Inselfieber\ngepackt, was?\n\n\x0E\x01\x09\x04\x16\x1E00Ich würde dir ja gerne mehr erzählen,\naber dafür muss ich zuerst noch\nweitere Nachforschungen anstellen.\n\n\x0E\x01\x09\x04\x00\xB00Beim nächsten Mal, ja?")
          					flw_433:
/*<433>*/ 					switch (scene_flags[14 /* 0x0 40 */]) {
          					  case 0:
          					  case 1:
/*< 60>*/ 						scene_flags[10 'Sealed Grounds'][14 /* 0x0 40 */] = true;
/*<579>*/ 						scene_flags[10 'Sealed Grounds'][35 /* 0x5 08 */] = true;
/*<343>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					}
          				  case 1:
/*<429>*/ 					printf("\x0E\x01\x09\x04\x16\x1E56In Ordnung.\nDen Rest erzähle ich dir dann ein\nanderes Mal...")
          					goto flw_433
          				}
          			  case 1:
/*<425>*/ 				printf("\x0E\x01\x09\x04\x16\x1E56In Ordnung.\nDen Rest erzähle ich dir dann ein\nanderes Mal...")
          				goto flw_433
          			}
          		}
          	  case 1:
/*< 55>*/ 		switch (scene_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<341>*/ 			printf("\x0E\x01\x09\x04\x00\x08Danke für deine Hilfe!")
/*<334>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 340, 'param3': 47}
/*<340>*/ 			set_camera(49, 0)
/*<338>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 256, 'next': 339, 'param3': 15}
/*<339>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 335, 'param3': 15}
/*<335>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 58, 'param3': 48}
/*< 58>*/ 			printf("\x0E\x01\x09\x04\x08\xB0AWo kommen diese roten Kerle her?\nFrüher haben sie sich in diesem Wald\njedenfalls nicht herumgetrieben...\n\n\x0E\x01\x09\x04\x16\x1E00Und so einen wie dich sehe ich heute\nschon zum zweiten Mal! Was ist das\nnur für ein Tag?!?\n\n\x0E\x01\x09\x04\x00\xB00Na ja, als Dank für deine Hilfe\nerzähle ich dir etwas Interessantes!")
/*< 57>*/ 			set_camera(13, 0)
/*<437>*/ 			{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 356, 'next': 65, 'param3': 15}
/*< 65>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 256, 'next': 56, 'param3': 15}
/*< 56>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 0, 'next': 260, 'param3': 14}
/*<260>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 342, 'param3': 17}
/*<342>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 365, 'param3': 17}
/*<365>*/ 			{'type': 'type3', 'subType': 2, 'param1': 16, 'param2': 256, 'next': 59, 'param3': 15}
/*< 59>*/ 			printf("\x0E\x01\x09\x04\x08\xB01Ich studiere hier in diesem Wald die\nGeschichte des Altertums. Darf ich\nmich vorstellen? Ich bin <b<Marugo>>, ein\nGorone.\n\x0E\x01\x09\x04\x00\x1700Den alten Schriften zufolge liegt\nirgendwo in den Wolken die <r<Insel\nder Göttin>>.\n\n\x0E\x01\x09\x04\x00\xB00Diese <b<alten Statuen>> dienten angeblich\neinst dazu, zu dieser Insel der Göttin\n<r<in den Himmel aufzusteigen>> und von\ndort wieder zurückzukehren.\nWenn du eine davon <r<findest>>, solltest du\nsie auf jeden Fall <r<untersuchen>><pling>, da dir\ndie Statuen als Anhaltspunkte dienen.\nDas ist wirklich praktisch!\nUnd diese Statue hier hat angeblich\ndie besondere Kraft, all die anderen\nStatuen, die es hier gibt, zu erwecken.\n\n\x0E\x01\x09\x04\x16\x1907Es mag wie ein Märchen klingen,\naber ich glaube daran.\n\n\nWie könnte man sonst den Umstand\nerklären, dass sie überall in dieser\nWelt verstreut herumstehen?")
          			goto flw_62
          		  case 1:
/*<336>*/ 			switch (scene_flags[94 /* 0xA 40 */]) {
          			  case 0:
/*<337>*/ 				printf("\x0E\x01\x09\x04\x00\xB52Verschwindet! Aaargh!")
          			  case 1:
/*<258>*/ 				set_camera(37, 0)
/*<465>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 50, 'param3': 32}
/*< 50>*/ 				printf("\x0E\x01\x09\x04\x1800\xB52Ihr fiesen Biester! Lasst mich in Ruhe!")
/*<259>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_500_54() {
/*<215>*/ 	start()
/*< 14>*/ 	printf("\x0E\x01\x05\x042\x00\x0E\x01\x12\x04\x00\x04Gebieter, Link.")
          }

          void entrypoint_500_71() {
/*<438>*/ 	start()
/*<439>*/ 	printf("\x0E\x01\x09\x04\x15\x1B09\x0E\x01\x08\x02\x1CDOooh!")
          }

          void entrypoint_500_03() {
/*<  4>*/ 	start()
/*<568>*/ 	{'type': 'type3', 'subType': 4, 'param1': 62, 'param2': 16384, 'next': 5, 'param3': 13}
/*<  5>*/ 	printf("Komm, steig in das Katapult! Ich weiß\nzwar nicht, ob es klappen wird, aber\nich helfe dir, so gut ich kann!")
          }

          void entrypoint_500_55() {
/*<210>*/ 	start()
/*<211>*/ 	printf("\x0E\x01\x05\x04K\x00Dies ist das <b<Erdland>>, über das im\nWolkenhort so viele Legenden\nkursieren...")
          }

          void entrypoint_500_72() {
/*<442>*/ 	start()
/*<443>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 445, 'param3': 32}
/*<445>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 453, 'param3': 40}
/*<453>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 444, 'param3': 6}
/*<444>*/ 	printf("\x0E\x01\x09\x04\x2800\x04\x0E\x01\x08\x02\x1CDHey! Link!")
/*<454>*/ 	set_camera(51, 0)
/*<458>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 446, 'param3': 16}
/*<446>*/ 	printf("\x0E\x01\x07\x04\x2800\x0FSieh dir das an!\nDas ist meine mächtige Geheimwaffe!")
/*<455>*/ 	set_camera(56, 0)
/*<459>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 447, 'param3': 13}
/*<447>*/ 	printf("Mein <r<mächtiges Katapult>>!")
/*<460>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 448, 'param3': 13}
/*<448>*/ 	printf("\x0E\x01\x09\x04\x2800\x18Da fällt dir nichts mehr ein, was?\nIch muss gestehen, ich habe mich dafür\nauch mächtig ins Zeug gelegt...")
/*<462>*/ 	printf("Schau gut hin!")
/*<456>*/ 	set_camera(48, 0)
/*<463>*/ 	printf("\x0E\x01\x09\x04\x2840\x4300Die ganzen Schienen rund um diese\nGrube habe ich ganz alleine gelegt.\nKlasse, was? \n\nIch bin selbst ganz begeistert von mir!<pause1E>\nWusste gar nicht, dass ich so vielseitig\nbegabt bin...\n\n\x0E\x01\x09\x04\x2841\x4000Jetzt gilt es nur noch, das Katapult in\nStellung zu bringen und dem Kerl eine\nordentliche Ladung zu verpassen!")
/*<464>*/ 	set_camera(32, 0)
/*<449>*/ 	printf("\x0E\x01\x09\x04\x2804\x4000Mit so ein paar Bomben sollten wir\nselbst einen Koloss wie ihn für kurze\nZeit außer Gefecht setzen können!")
/*<461>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 450, 'param3': 13}
/*<450>*/ 	printf("Aber ein wenig zu früh kommt er\nmir schon...")
/*<451>*/ 	printf("\x0E\x01\x09\x04\x2841\x4000Ich muss hier noch ein paar kleine\nVorbereitungen treffen, um das\nKatapult bewegen zu können.\n\nIch melde mich, wenn ich so weit bin!\nBis dahin bist du ganz auf dich allein\ngestellt.")
/*<457>*/ 	set_camera(57, 0)
/*<452>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("")
          }

          void entrypoint_500_56() {
/*<214>*/ 	start()
/*<212>*/ 	printf("\x0E\x01\x05\x04K\x00Und das hier...\nMan nennt diesen Ort den <b<Siegelhain>>.")
          }

          void entrypoint_500_73() {
/*<479>*/ 	start()
/*<477>*/ 	printf("...\x0E\x01\x06\x02\xFDCDMein Kind!\n\n\n\n\x0E\x01\x06\x02\xFDCDKind des Himmels, das aus den\nWolken kam...")
          }

          void entrypoint_500_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf("\x0E\x01\x09\x04\x00\x0FEr hat das Siegel gebrochen!\n\n\n\nIch erzähle dir später mehr darüber.\n\n\n\nJetzt musst du erst dafür sorgen, dass\ner nicht aus seinem Loch entkommen\nkann.\n\nEr darf den Tempel nicht erreichen!")
          }

          void entrypoint_500_22() {
/*< 26>*/ 	start()
/*< 81>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 80, 'param3': 32}
/*< 80>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 27, 'param3': 16}
/*< 27>*/ 	printf("\x0E\x01\x09\x04\x10\x160DLos! Link!<pause1E>\n\n\n\nLenke den <r<Himmelsstrahl >>auf den\nSiegelstein!\n\n\n\x0E\x01\x09\x04\x11\x1700Schnell!")
          }

          void entrypoint_500_57() {
/*<413>*/ 	start()
/*<370>*/ 	{'type': 'type3', 'subType': 2, 'param1': 23, 'param2': 356, 'next': 310, 'param3': 15}
/*<310>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 311, 'param3': 32}
/*<311>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 484, 'param3': 17}
/*<484>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 40, 'next': 509, 'param3': 17}
/*<509>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<510>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 511, 'param3': 6}
/*<511>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*<515>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 512, 'param3': 6}
/*<512>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<513>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 375, 'param3': 6}
/*<375>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<514>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 517, 'param3': 6}
/*<517>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10302, 'param2': 17664, 'next': 485, 'param3': 13}
/*<485>*/ 	set_camera(52, 0)
/*<376>*/ 	printf("\x0E\x01\x09\x04\x2800SWas zum...\x0E\x01\x05\x04\x1E\x00")
/*<254>*/ 	printf("\x0E\x01\x09\x04\x2800\x4000Oh-oh, gleich geht es los...\x0E\x01\x05\x04\x1E\x00")
/*<255>*/ 	printf("\x0E\x01\x09\x04\x283E\x400FKeine Panik!\n\n\n\n\x0E\x01\x09\x04\x2841\x00Du kennst ja mein <r<mächtiges Katapult\n>>bereits...")
/*<256>*/ 	printf("\x0E\x01\x09\x04\x2800\x00Solange wir das haben, kann uns dieser\nKoloss keine Angst einjagen!\n\n\n\x0E\x01\x09\x04\x2800\x200Dieser Kerl ist wirklich mein\nSchicksalsgegner...")
/*<257>*/ 	printf("\x0E\x01\x09\x04\x2800\x200Link!\nPass auf, dass er mir nicht zu\nnahe kommt!")
/*<516>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*<371>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<522>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<566>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<567>*/ 	story_flags[176 /* us: 805A9AE2 0x80, jp: 805ACD62 0x80 */] = true;
/*<312>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 419, 'param3': 42}
/*<419>*/ 	story_flags[483 /* us: 805A9B10 0x02, jp: 805ACD90 0x02 */] = true;
          }

          void entrypoint_500_74() {
/*<480>*/ 	start()
/*<478>*/ 	printf("\x0E\x01\x06\x02\xFDCDHalte das Schwert der Göttin\nhimmelwärts...\n<pause0F>\x0E\x01\x06\x02\xFDCDHalte es dem Bösen entgegen...")
          }

          void entrypoint_500_40() {
/*< 51>*/ 	start()
/*< 85>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 84, 'param3': 32}
/*< 84>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3592, 'param2': 2829, 'next': 86, 'param3': 13}
/*< 86>*/ 	set_camera(15, 0)
/*< 52>*/ 	printf("Link! Der <r<Siegelstein\n>>steckt in der Stirn des Verbannten!\n\n\n\x0E\x01\x09\x04\xE00\x13Wenn du ihn mit deinem Schwert\nhineinschlägst, müsste das Erfolg\nzeigen!")
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_58() {
/*<216>*/ 	start()
/*<213>*/ 	printf("\x0E\x01\x05\x04K\x00Nun denn, \x0E\x01\x12\x04\x00\x0BGebieter.\nPass gut auf dich auf.")
          }

          void entrypoint_500_23() {
/*<475>*/ 	start()
/*<481>*/ 	printf("Ich habe dir etwas zu berichten,\nGebieter.")
/*<482>*/ 	printf("Es scheint, als sei dieses Tor vor\nKurzem geöffnet worden. Jetzt aber ist\nes von einer starken Kraft versiegelt.")
          }

          void entrypoint_500_75() {
/*<497>*/ 	start()
/*<498>*/ 	story_flags[790 /* us: 805A9B2C 0x40, jp: 805ACDAC 0x40 */] = true;
/*<520>*/ 	scene_flags[10 'Sealed Grounds'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_500_41() {
/*< 76>*/ 	start()
/*< 74>*/ 	printf("\x0E\x01\x09\x04\x00&Gut gemacht, Link!\nAber ohne mich hättest du's sicher\nnicht geschafft.\n\nUnd jetzt lass uns endlich dieses\nZeitportal öffnen! Ich gehe schon\nmal vor...")
          }

          void entrypoint_500_24() {
/*<137>*/ 	start()
/*<547>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<548>*/ 		printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu\nberichten. Der <r<Siegelstein>> steckt in der\nStirn des Verbannten.\n\nDu kannst nicht fliehen, ehe du diese\nBestie besiegt hast...")
          	  case 1:
/*<139>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<140>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<141>*/ 				printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\nDu, \x0E\x01\x12\x04\x00\x02Gebieter, musst den Verbannten\njetzt in seine Schranken zurückweisen.\nDu kannst jetzt nicht fliehen.")
          			  case 1:
/*<142>*/ 				printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu\nberichten. Der <r<Siegelstein>> steckt in der\nStirn des Verbannten.\n\nDu kannst nicht fliehen, ehe du diese\nBestie besiegt hast...")
          			}
          		  case 1:
/*<138>*/ 			printf("")
          		}
          	}
          }

          void entrypoint_500_59() {
/*<217>*/ 	start()
/*<218>*/ 	printf("\x0E\x01\x09\x04>\x4515\x0E\x01\x08\x02\x1CDAaargh!\n\n\n\n\x0E\x01\x09\x04\x00\x4000Was ist das?!?\nDas Beben hat den Weg verschüttet!\nIch komme hier nicht weiter!\nWas tun wir jetzt nur?\n\x0E\x01\x08\x02\x1CD!!!")
          }

          void entrypoint_500_76() {
/*<506>*/ 	start()
/*<466>*/ 	printf("\x0E\x01\x09\x04\x13\x1907Was hast du da getan!\nDas ist ja unglaublich!\n\n\n\x0E\x01\x09\x04\x17\x1B08Die Statue hat geleuchtet, als du dich\nihr genähert hast. Du bist wirklich\neinmalig!")
          }

          void entrypoint_500_08() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("\x0E\x01\x09\x04D\x4300Gut gezielt, aber etwas zu\nspät geschossen!\n\n\n\x0E\x01\x09\x04\x00\x4000Ich lege dann mal das nächste\nGeschoss ein. Sag mir Bescheid,\nwenn es losgehen soll!")
          }

          void entrypoint_500_25() {
/*< 35>*/ 	start()
/*<525>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 70>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 38>*/ 	scene_flags[10 'Sealed Grounds'][10 /* 0x0 04 */] = true;
/*< 41>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<582>*/ 	story_flags[852 /* us: 805A9B34 0x04, jp: 805ACDB4 0x04 */] = true;
          }

          void entrypoint_500_42() {
/*< 77>*/ 	start()
/*< 75>*/ 	printf("\x0E\x01\x09\x04 \x3010Puh... Link...\nDas war wirklich knapp! Da haben\nwir noch mal Glück gehabt...\n\n\x0E\x01\x09\x04B\x200Ich gehe gleich zum Tempel!\nBeeil dich und komm nach!")
          }

          void entrypoint_500_77() {
/*<507>*/ 	start()
/*<508>*/ 	printf("\x0E\x01\x09\x04>\x4026Link!\nSteig zum Tempel hoch und komm\ndann schnell <r<hierher>>!")
          }

          void entrypoint_500_09() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf("\x0E\x01\x09\x04 \x403CGut, du bist auf dem <b<Katapult>>! Ziele\nauf den Siegelstein auf seinem Kopf! ")
          }

          void entrypoint_500_26() {
/*< 36>*/ 	start()
/*<526>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 48>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 39>*/ 	scene_flags[10 'Sealed Grounds'][11 /* 0x0 08 */] = true;
/*< 42>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<583>*/ 	story_flags[853 /* us: 805A9B34 0x08, jp: 805ACDB4 0x08 */] = true;
          }

          void entrypoint_500_43() {
/*<131>*/ 	start()
/*<405>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 369, 'param3': 32}
/*<369>*/ 	set_camera(59, 0)
/*<401>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 260, 'next': 403, 'param3': 15}
/*<403>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 402, 'param3': 13}
/*<402>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 4, 'next': 483, 'param3': 14}
/*<483>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 404, 'param3': 17}
/*<404>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 521, 'param3': 17}
/*<521>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<133>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<262>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 132, 'param3': 13}
/*<132>*/ 	printf("Hey, Link! Gibt's das denn?\nDieser Kerl ist schon wieder zurück!")
/*<263>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 136, 'param3': 13}
/*<136>*/ 	printf("Einen Moment! Ich bringe mich\nschnell in Stellung...")
/*<135>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 772, 'next': 420, 'param3': 14}
/*<420>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<134>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<418>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_60() {
/*<219>*/ 	start()
/*<372>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 222, 'param3': 32}
/*<222>*/ 	printf("\x0E\x01\x09\x04\x2800\x04\x0E\x01\x08\x02\x1CDHey! Link!")
/*<293>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 294, 'param3': 40}
/*<294>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 229, 'param3': 6}
/*<229>*/ 	set_camera(31, 0)
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 295, 'param3': 16}
/*<295>*/ 	{'type': 'type3', 'subType': 2, 'param1': 20, 'param2': 356, 'next': 223, 'param3': 15}
/*<223>*/ 	printf("\x0E\x01\x07\x04\x2800\x0FSieh dir das an!\nDas ist meine mächtige Geheimwaffe!")
/*<230>*/ 	set_camera(32, 0)
/*<344>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 224, 'param3': 13}
/*<224>*/ 	printf("Mein <r<mächtiges Katapult>>!")
/*<345>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10302, 'param2': 512, 'next': 225, 'param3': 13}
/*<225>*/ 	printf("\x0E\x01\x09\x04\x2800\x18Da fällt dir nichts mehr ein, was?\nIch muss gestehen, ich habe mich dafür\nauch mächtig ins Zeug gelegt...")
/*<361>*/ 	printf("Schau gut hin!")
/*<232>*/ 	set_camera(33, 0)
/*<362>*/ 	printf("\x0E\x01\x09\x04\x2840\x4300Die ganzen Schienen rund um diese\nGrube habe ich ganz alleine gelegt.\nKlasse, was? \n\nIch bin selbst ganz begeistert von mir!<pause1E>\nWusste gar nicht, dass ich so vielseitig\nbegabt bin...\n\n\x0E\x01\x09\x04\x2841\x4000Jetzt gilt es nur noch, das Katapult in\nStellung zu bringen und dem Kerl eine\nordentliche Ladung zu verpassen!")
/*<233>*/ 	set_camera(32, 0)
/*<226>*/ 	printf("\x0E\x01\x09\x04\x2804\x4000Mit so ein paar Bomben sollten wir\nselbst einen Koloss wie ihn für kurze\nZeit außer Gefecht setzen können!")
/*<368>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 227, 'param3': 13}
/*<227>*/ 	printf("Aber ein wenig zu früh kommt er\nmir schon...")
/*<228>*/ 	printf("\x0E\x01\x09\x04\x2841\x4000Ich muss hier noch ein paar kleine\nVorbereitungen treffen, um das\nKatapult bewegen zu können.\n\nIch melde mich, wenn ich so weit bin!\nBis dahin bist du ganz auf dich allein\ngestellt.")
/*<296>*/ 	set_camera(45, 0)
/*<240>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_78() {
/*<580>*/ 	start()
/*<581>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, du musst den Verbannten\n\x0E\x01\x12\x04\x00\x02besiegen.\n\n\nDu kannst jetzt nicht fliehen.")
          }

          void entrypoint_500_27() {
/*< 37>*/ 	start()
/*<527>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 69>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 40>*/ 	scene_flags[10 'Sealed Grounds'][12 /* 0x0 10 */] = true;
/*< 43>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<584>*/ 	story_flags[854 /* us: 805A9B34 0x10, jp: 805ACDB4 0x10 */] = true;
          }

          void entrypoint_500_61() {
/*<220>*/ 	start()
/*<243>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 244, 'param3': 32}
/*<244>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 245, 'param3': 16}
/*<245>*/ 	printf("\x0E\x01\x09\x04\x2800\x04\x0E\x01\x08\x02\x1CDHey! Link!")
/*<246>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 297, 'param3': 40}
/*<297>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 501, 'param3': 6}
/*<501>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 298, 'param3': 47}
/*<298>*/ 	set_camera(36, 0)
/*<503>*/ 	{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 502, 'param3': 15}
/*<502>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 247, 'param3': 48}
/*<247>*/ 	printf("\x0E\x01\x07\x04\x2800\x0FSieh dir das an!\nDas ist meine mächtige Geheimwaffe!")
/*<299>*/ 	set_camera(46, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 346, 'param3': 6}
/*<346>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 248, 'param3': 13}
/*<248>*/ 	printf("Mein <r<mächtiges Katapult>>!")
/*<474>*/ 	{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 356, 'next': 347, 'param3': 15}
/*<347>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 249, 'param3': 13}
/*<249>*/ 	printf("\x0E\x01\x09\x04\x2800\x18Da fällt dir nichts mehr ein, was?\nIch muss gestehen, ich habe mich dafür\nauch mächtig ins Zeug gelegt...")
/*<363>*/ 	printf("Schau gut hin!")
/*<301>*/ 	set_camera(47, 0)
/*<364>*/ 	printf("\x0E\x01\x09\x04\x2840\x4300Die ganzen Schienen rund um diese\nGrube habe ich ganz alleine gelegt.\nKlasse, was? \n\nIch bin selbst ganz begeistert von mir!<pause1E>\nWusste gar nicht, dass ich so vielseitig\nbegabt bin...\n\n\x0E\x01\x09\x04\x2841\x4000Jetzt gilt es nur noch, das Katapult in\nStellung zu bringen und dem Kerl eine\nordentliche Ladung zu verpassen!")
/*<367>*/ 	set_camera(32, 0)
/*<250>*/ 	printf("\x0E\x01\x09\x04\x2804\x4000Mit so ein paar Bomben sollten wir\nselbst einen Koloss wie ihn für kurze\nZeit außer Gefecht setzen können!")
/*<348>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 251, 'param3': 13}
/*<251>*/ 	printf("Aber ein wenig zu früh kommt er\nmir schon...")
/*<252>*/ 	printf("\x0E\x01\x09\x04\x2841\x4000Ich muss hier noch ein paar kleine\nVorbereitungen treffen, um das\nKatapult bewegen zu können.\n\nIch melde mich, wenn ich so weit bin!\nBis dahin bist du ganz auf dich allein\ngestellt.")
/*<302>*/ 	set_camera(50, 0)
/*<253>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_44() {
/*<354>*/ 	start()
/*<356>*/ 	switch (scene_flags[6 /* 0x1 40 */]) {
          	  case 0:
/*<358>*/ 		printf("\x0E\x01\x09\x04\x17\x1B08Die Statue, sie leuchtet! Woher\nwusstest du, wie man das macht?")
          	  case 1:
/*<355>*/ 		printf("\x0E\x01\x09\x04\x15\x1B05\x0E\x01\x08\x02\x1CDHargh!")
/*<357>*/ 		printf("\x0E\x01\x09\x04\x13\x1909Heiliger Kiesel!\n\n\n\n\x0E\x01\x09\x04\x17\x1B08Was hast du da getan? Die Statue,\nsie leuchtet! Woher wusstest du,\nwie man das macht?")
/*<359>*/ 		scene_flags[10 'Sealed Grounds'][6 /* 0x1 40 */] = true;
          	}
          }

          void entrypoint_500_45() {
/*< 89>*/ 	start()
/*< 88>*/ 	printf("\x0E\x01\x09\x04\x00&Was ist das?!? Dieses Mal sind ihm\nHände gewachsen!\n\n\nDie perfekte Gelegenheit, dir meine\nErfindung zu demonstrieren...\n\n\n\x0E\x01\x09\x04B\x4000Ich bereite alles vor und geb dir\nBescheid, wenn ich bereit bin!\nKämpf du solange mit ihm oder so...")
          }

          void entrypoint_500_28() {
/*<160>*/ 	start()
/*<553>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<554>*/ 		printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\nDer Verbannte ist wiedererwacht.\nDu kannst jetzt nicht fliehen.")
          	  case 1:
/*<161>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<162>*/ 			printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\nDu, \x0E\x01\x12\x04\x00\x02Gebieter, musst den Verbannten\njetzt in seine Schranken zurückweisen.\nDu kannst jetzt nicht fliehen.")
          		  case 1:
/*<163>*/ 			printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\nDer Verbannte ist wiedererwacht.\nDu kannst jetzt nicht fliehen.")
          		}
          	}
          }

          void entrypoint_500_62() {
/*<221>*/ 	start()
/*<234>*/ 	printf("")
/*<303>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 307, 'param3': 40}
/*<307>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 305, 'param3': 6}
/*<305>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 349, 'param3': 32}
/*<349>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 306, 'param3': 16}
/*<306>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 304, 'param3': 17}
/*<304>*/ 	set_camera(31, 0)
/*<308>*/ 	{'type': 'type3', 'subType': 2, 'param1': 20, 'param2': 356, 'next': 238, 'param3': 15}
/*<238>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 350, 'param3': 6}
/*<350>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 235, 'param3': 13}
/*<235>*/ 	printf("\x0E\x01\x09\x04\x2800\x4000Oh-oh, gleich geht es los...\x0E\x01\x05\x04\x1E\x00")
/*<241>*/ 	set_camera(32, 0)
/*<351>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 236, 'param3': 13}
/*<236>*/ 	printf("\x0E\x01\x09\x04\x283E\x400FKeine Panik!\n\n\n\n\x0E\x01\x09\x04\x2841\x00Du kennst ja mein <r<mächtiges Katapult\n>>bereits...")
/*<237>*/ 	printf("\x0E\x01\x09\x04\x2800\x00Solange wir das haben, kann uns dieser\nKoloss keine Angst einjagen!\n\n\n\x0E\x01\x09\x04\x2800\x200Dieser Kerl ist wirklich mein\nSchicksalsgegner...")
/*<352>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 242, 'param3': 13}
/*<242>*/ 	printf("\x0E\x01\x09\x04\x2800\x200Link!\nPass auf, dass er mir nicht zu\nnahe kommt!")
/*<309>*/ 	set_camera(45, 0)
/*<239>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_11() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf("")
          }

          void entrypoint_500_29() {
/*< 72>*/ 	start()
/*<538>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 2, 'next': 100, 'param3': 46}
/*<100>*/ 	switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          	  case 0:
/*<528>*/ 		switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          		  case 0:
/*<530>*/ 			switch (scene_flags[43 /* 0x4 08 */]) {
          			  case 0:
/*<534>*/ 				printf("\x0E\x01\x09\x04\x00\x4026Hey, Link! Ich habe alle\nmeine Bomben aufgebraucht!\n\n\n\x0E\x01\x09\x04 \x4000Jetzt bleibt nur eins, Link.\nDu musst dich direkt auf seinen Kopf\nschleudern! Beeil dich, das ist der\neinzige Weg!")
          			  case 1:
/*<532>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<533>*/ 					printf("\x0E\x01\x09\x04\x00&Du kannst jederzeit auf mein\n<r<mächtiges Katapult >>zurückgreifen!\n\n\nDrück einfach(^), um das Katapult\nzum Feuern vorzubereiten!\x0E\x01\x11\x02\x8CD\n\n\nMithilfe von \x0E\x02\x04\x02\xECD bewegst du es,\nmit der <r<Wii-Fernbedienung>> zielst du.\nUnd dann auf ihn!")
          				  case 1:
/*<531>*/ 					printf("\x0E\x01\x09\x04\x00\x4226Ein weiteres Mal wird mein <r<mächtiges\nKatapult >>gebraucht!\n\n\nDu weißt ja schon, dass du es durch\nDrücken von (^) vorbereiten kannst!\x0E\x01\x11\x02\x8CD\n\n\n\x0E\x01\x09\x04B\x4000Lass uns unsere Attacken koordinieren\nund den Kerl endlich kleinmachen!")
          				}
          			}
          		  case 1:
/*<529>*/ 			switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          			  case 0:
/*<536>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<537>*/ 					printf("\x0E\x01\x09\x04\x00&Du kannst jederzeit auf mein\n<r<mächtiges Katapult >>zurückgreifen!\n\n\nDrück einfach(^), um das Katapult\nzum Feuern vorzubereiten!\x0E\x01\x11\x02\x8CD\n\n\nMithilfe von \x0E\x02\x04\x02\xECD bewegst du es,\nmit der <r<Wii-Fernbedienung>> zielst du.\nUnd dann auf ihn!")
          				  case 1:
/*<535>*/ 					printf("\x0E\x01\x09\x04\x04\x4100Jetzt kann ich endlich mein\n<r<mächtiges Katapult >>ausprobieren!\n\x0E\x01\x09\x04\x00\x300Wenn ich so weit bin, werde\nich dir über (^) ein Zeichen geben.\n\x0E\x01\x09\x04\x00\x4000Bis dahin muss es dein Schwert richten!\x0E\x01\x11\x02\x8CD")
          				}
          			  case 1:
/*< 78>*/ 				switch (scene_flags[71 /* 0x9 80 */]) {
          				  case 0:
/*<193>*/ 					switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          					  case 0:
/*<261>*/ 						scene_flags[10 'Sealed Grounds'][97 /* 0xD 02 */] = true;
/*<561>*/ 						switch (story_flags[490 /* us: 805A9B13 0x01, jp: 805ACD93 0x01 */]) {
          						  case 0:
/*<564>*/ 							switch (story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */]) {
          							  case 0:
          								flw_194:
/*<194>*/ 								printf("\x0E\x01\x09\x04\x00&Wo kann ich dich hinschießen?\nWo möchtest du spielen?\n\n[1]Wolkenmeer[2]Erdland[3-]Ich bleibe\nhier.")
/*<195>*/ 								switch (choice(3)) {
          								  case 0:
/*<586>*/ 									switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
          									  case 0:
/*<196>*/ 										printf("Das Wolkenmeer also.\nUnd was genau willst du spielen?\n\n[1]Roulette[2]Insektenparadies[3]Was Anderes.")
/*<571>*/ 										switch (choice(3)) {
          										  case 0:
          											flw_209:
/*<209>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          											flw_204:
/*<204>*/ 											{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 199, 'param3': 42}
/*<199>*/ 											printf("\x0E\x01\x09\x04B\x342Auf geht's! Halt dich fest!")
          										  case 1:
          											flw_202:
/*<202>*/ 											zone_temp_flags[2 /* 0x1 04 */] = true;
          											goto flw_204
          										  case 2:
/*<197>*/ 											printf("Willst du vielleicht etwas\nhiervon spielen?\n\n[1]Bambusfäller[2]Kürbisschießen[3-]Nichts")
/*<572>*/ 											switch (choice(3)) {
          											  case 0:
          												flw_203:
/*<203>*/ 												zone_temp_flags[3 /* 0x1 08 */] = true;
          												goto flw_204
          											  case 1:
/*<205>*/ 												zone_temp_flags[4 /* 0x1 10 */] = true;
          												goto flw_204
          											  case 2:
          												flw_200:
/*<200>*/ 												printf("Na, dann sag mir Bescheid,\nwenn du irgendwohin willst!")
          											}
          										}
          									  case 1:
/*<585>*/ 										printf("Das Wolkenmeer also.\nUnd was genau willst du spielen?\n[1]Roulette[2]Insektenparadies[3]Bambusfäller[4-]Nichts")
/*<587>*/ 										switch (choice(4)) {
          										  case 0:
          											goto flw_209
          										  case 1:
          											goto flw_202
          										  case 2:
          											goto flw_203
          										  case 3:
          											goto flw_200
          										}
          									}
          								  case 1:
/*<198>*/ 									printf("Das Erdland also. Und was genau\nwillst du spielen?\n\n\n[1]Heldenprüfung[2]Rubinjagd[3]Loren-Lenken[4-]Nichts")
/*<201>*/ 									switch (choice(4)) {
          									  case 0:
/*<206>*/ 										zone_temp_flags[5 /* 0x1 20 */] = true;
          										goto flw_204
          									  case 1:
/*<207>*/ 										zone_temp_flags[6 /* 0x1 40 */] = true;
          										goto flw_204
          									  case 2:
/*<208>*/ 										zone_temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_204
          									  case 3:
          										goto flw_200
          									}
          								  case 2:
          									goto flw_200
          								}
          							  case 1:
/*<563>*/ 								printf("\x0E\x01\x09\x04\x00\x04Hey, Link!\n\n\nIch werde dir helfen!")
/*<562>*/ 								story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */] = true;
/*<577>*/ 								switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          								  case 0:
          									goto flw_194
          								  case 1:
/*<578>*/ 									printf("Mit diesem Katapult kann ich dich an\nverschiedene Orte schießen!")
          									flw_575:
/*<575>*/ 									printf("Es macht Spaß, dich irgendwo hin zu\nschießen! Hast du Lust auf eine kleine\nFlugeinlage nach Bado-Art?\n\nDu solltest dich jedenfalls an Orten,\nan denen du noch nicht warst, etwas\ngenauer umsehen!")
/*<576>*/ 									story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */] = true;
          									goto flw_194
          								}
          							}
          						  case 1:
/*<573>*/ 							switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          							  case 0:
          								goto flw_194
          							  case 1:
/*<574>*/ 								printf("\x0E\x01\x09\x04\x00\x04Hey, Link!\nMit diesem Katapult kann ich dich an\nverschiedene Orte schießen!")
          								goto flw_575
          							}
          						}
          					  case 1:
/*< 79>*/ 						printf("\x0E\x01\x09\x04\x00\x03Du willst in den Wald von Phirone?\n\n\n\nIch kann dich mit meinem <r<mächtigen\nKatapult>> direkt hinschießen!\n[1]Bitte![2-]Keine Lust.")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 95>*/ 							printf("\x0E\x01\x09\x04\x00BNa, dann lass mich mal machen!")
/*< 92>*/ 							zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 96>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 94>*/ 							printf("Sag mir einfach, wenn du es doch\nversuchen willst!")
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          					  case 0:
/*<187>*/ 						switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          						  case 0:
          							flw_190:
/*<190>*/ 							printf("\x0E\x01\x09\x04\x00&Na, wie habe ich das wieder gemacht?\nJetzt musst du nur noch das Siegel\nschließen...")
          						  case 1:
/*<192>*/ 							switch (scene_flags[19 /* 0x3 08 */]) {
          							  case 0:
          								goto flw_190
          							  case 1:
/*<320>*/ 								switch (scene_flags[43 /* 0x4 08 */]) {
          								  case 0:
/*<324>*/ 									printf("\x0E\x01\x09\x04\x00\x4026Hey, Link! Ich habe alle\nmeine Bomben aufgebraucht!\n\n\n\x0E\x01\x09\x04 \x4000Jetzt bleibt nur eins, Link.\nDu musst dich direkt auf seinen Kopf\nschleudern! Beeil dich, das ist der\neinzige Weg!")
          								  case 1:
/*<322>*/ 									switch (zone_temp_flags[11 /* 0x0 08 */]) {
          									  case 0:
/*<323>*/ 										printf("\x0E\x01\x09\x04\x00&Du kannst jederzeit auf mein\n<r<mächtiges Katapult >>zurückgreifen!\n\n\nDrück einfach(^), um das Katapult\nzum Feuern vorzubereiten!\x0E\x01\x11\x02\x8CD\n\n\nMithilfe von \x0E\x02\x04\x02\xECD bewegst du es,\nmit der <r<Wii-Fernbedienung>> zielst du.\nUnd dann auf ihn!")
          									  case 1:
/*<321>*/ 										printf("\x0E\x01\x09\x04\x00\x4226Ein weiteres Mal wird mein <r<mächtiges\nKatapult >>gebraucht!\n\n\nDu weißt ja schon, dass du es durch\nDrücken von (^) vorbereiten kannst!\x0E\x01\x11\x02\x8CD\n\n\n\x0E\x01\x09\x04B\x4000Lass uns unsere Attacken koordinieren\nund den Kerl endlich kleinmachen!")
          									}
          								}
          							}
          						}
          					  case 1:
/*<186>*/ 						switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          						  case 0:
          							flw_189:
/*<189>*/ 							printf("\x0E\x01\x09\x04\x00&Das habe ich gut gemacht!<pause1E> Und jetzt\nmusst du das Siegel verschließen!\n\n\nBeim letzten Mal hast du den Stein\nmit dem Strahl deines Schwertes\nbeschossen, richtig?")
          						  case 1:
/*<191>*/ 							switch (scene_flags[18 /* 0x3 04 */]) {
          							  case 0:
          								goto flw_189
          							  case 1:
/*<318>*/ 								switch (zone_temp_flags[11 /* 0x0 08 */]) {
          								  case 0:
/*<319>*/ 									printf("\x0E\x01\x09\x04\x00&Du kannst jederzeit auf mein\n<r<mächtiges Katapult >>zurückgreifen!\n\n\nDrück einfach(^), um das Katapult\nzum Feuern vorzubereiten!\x0E\x01\x11\x02\x8CD\n\n\nMithilfe von \x0E\x02\x04\x02\xECD bewegst du es,\nmit der <r<Wii-Fernbedienung>> zielst du.\nUnd dann auf ihn!")
          								  case 1:
/*< 73>*/ 									printf("\x0E\x01\x09\x04\x04\x4100Jetzt kann ich endlich mein\n<r<mächtiges Katapult >>ausprobieren!\n\x0E\x01\x09\x04\x00\x300Wenn ich so weit bin, werde\nich dir über (^) ein Zeichen geben.\n\x0E\x01\x09\x04\x00\x4000Bis dahin muss es dein Schwert richten!\x0E\x01\x11\x02\x8CD")
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	  case 1:
/*<101>*/ 		printf("\x0E\x01\x09\x04\x00&Das Mütterchen hat gesagt, dass dieses\nUngeheuer schon bald wieder\nzurückkehren könnte...\n\n\x0E\x01\x09\x04\x00\x4200Dieses Mal bin ich vorbereitet, denn ich\nbastle gerade an einer phänomenalen\nGeheimwaffe!\n\n\x0E\x01\x09\x04\x00\x0FNoch ist sie nicht fertig, aber ich freue\nmich bereits darauf, es dem Ungeheuer\ndamit zu zeigen!")
          	}
          }

          void entrypoint_500_46() {
/*< 90>*/ 	start()
/*< 91>*/ 	printf("\x0E\x01\x09\x04\x00&Da ist er schon wieder!\nDer Kerl ist nicht kleinzukriegen...\n\n\n\x0E\x01\x09\x04\x04\x4000Link!\nWir machen es einfach wie beim letzten\nMal, was?")
          }

          void entrypoint_500_63() {
/*<377>*/ 	start()
/*<406>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 392, 'param3': 32}
/*<392>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 260, 'next': 382, 'param3': 15}
/*<382>*/ 	set_camera(54, 0)
/*<408>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 394, 'param3': 17}
/*<394>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 393, 'param3': 13}
/*<393>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 4, 'next': 395, 'param3': 14}
/*<395>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 524, 'param3': 16}
/*<524>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<380>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<381>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 379, 'param3': 13}
/*<379>*/ 	printf("Hey, Link! Gibt's das denn?\nDieser Kerl ist schon wieder zurück!")
/*<383>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 385, 'param3': 13}
/*<385>*/ 	printf("Einen Moment! Ich bringe mich\nschnell in Stellung...")
/*<384>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 772, 'next': 422, 'param3': 14}
/*<422>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<415>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<416>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_47() {
/*<154>*/ 	start()
/*<539>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<541>*/ 		{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 540, 'param3': 13}
/*<540>*/ 		printf("Link! Der <r<Siegelstein\n>>steckt in der Stirn des Verbannten!\n\n\n\x0E\x01\x09\x04\xE00\x13Wenn du ihn mit deinem Schwert\nhineinschlägst, müsste das Erfolg\nzeigen!")
          	  case 1:
/*<156>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<157>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<159>*/ 				printf("\x0E\x01\x09\x04\x10\x160DLos! Link!<pause1E>\n\n\n\nLenke den <r<Himmelsstrahl >>auf den\nSiegelstein!\n\n\n\x0E\x01\x09\x04\x11\x1700Schnell!")
          			  case 1:
/*<374>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 158, 'param3': 13}
/*<158>*/ 				printf("Link! Der <r<Siegelstein\n>>steckt in der Stirn des Verbannten!\n\n\n\x0E\x01\x09\x04\xE00\x13Wenn du ihn mit deinem Schwert\nhineinschlägst, müsste das Erfolg\nzeigen!")
          			}
          		  case 1:
/*<155>*/ 			printf("\x0E\x01\x09\x04\x08\x170FLink!\nDu musst sofort zum <r<Siegelstein >>in der\nMitte des Siegelhains!\n\n\x0E\x01\x09\x04\x14\xB00Dies ist kein gewöhnliches Beben!\nDas Böse, es wird wieder erwachen...")
          		}
          	}
          }

          void entrypoint_500_64() {
/*<265>*/ 	start()
/*<276>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 281, 'param3': 40}
/*<281>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 273, 'param3': 6}
/*<273>*/ 	set_camera(40, 0)
/*<289>*/ 	{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 356, 'next': 270, 'param3': 15}
/*<270>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 500, 'param3': 32}
/*<500>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 268, 'param3': 17}
/*<268>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 260, 'next': 271, 'param3': 15}
/*<271>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 269, 'param3': 32}
/*<269>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 504, 'param3': 15}
/*<504>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 288, 'param3': 17}
/*<288>*/ 	set_camera(41, 0)
/*<275>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3585, 'param2': 256, 'next': 272, 'param3': 13}
/*<272>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1077, 'param2': 13824, 'next': 290, 'param3': 13}
/*<290>*/ 	set_camera(42, 0)
/*<274>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<286>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1082, 'param2': 15360, 'next': 267, 'param3': 13}
/*<267>*/ 	printf("\x0E\x01\x09\x04\x4000Was ist das?\nDie Erde... sie bebt?!?")
/*<291>*/ 	set_camera(24, 0)
/*<287>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 283, 'param3': 13}
/*<283>*/ 	printf("\x0E\x01\x09\x04\x4001Aaah!\nEin... Erdbeben?!?")
/*<279>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<278>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*<277>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<280>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 353, 'param3': 13}
/*<353>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3584, 'param2': 5632, 'next': 499, 'param3': 13}
/*<499>*/ 	set_camera(43, 0)
/*<266>*/ 	printf("\x0E\x01\x09\x04\xE00\x10Link!\nSchnell, zum <r<Siegelstein >>in der Mitte\ndes Hains!")
/*<284>*/ 	printf("\x0E\x01\x09\x04\xE00\x1653Wer weiß, wann das Böse erwacht?\nDu musst dich beeilen!")
/*<292>*/ 	set_camera(44, 0)
/*<505>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 285, 'param3': 15}
/*<285>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_30() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf("\x0E\x01\x09\x04\x00\x0FEr hat das Siegel gebrochen!\n\n\n\nIch erzähle dir später mehr darüber.\n\n\n\nJetzt musst du erst dafür sorgen, dass\ner nicht aus seinem Loch entkommen\nkann.\n\nEr darf den Tempel nicht erreichen!")
          }

          void entrypoint_500_48() {
/*<164>*/ 	start()
/*<552>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<551>*/ 		printf("\x0E\x01\x09\x04\x10\x180FLink!\nDu musst das Böse in seine Schranken\nzurückweisen!\n\nSeine Kraft ist im Wachsen begriffen...\nFass dir ein Herz und tritt näher!")
          	  case 1:
/*<165>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<167>*/ 			printf("\x0E\x01\x09\x04\x10\x180DWeißt du, wie man\ndas Siegel verschließt?\n\n\nStelle dich vor den Stein und lenke den\n<r<Himmelsstrahl>> auf ihn!<pause1E>\nIch weiß, dass du es kannst...")
          		  case 1:
/*<166>*/ 			printf("\x0E\x01\x09\x04\x10\x180FLink!\nDu musst das Böse in seine Schranken\nzurückweisen!\n\nSeine Kraft ist im Wachsen begriffen...\nFass dir ein Herz und tritt näher!")
          		}
          	}
          }

          void entrypoint_500_65() {
/*<328>*/ 	start()
/*<330>*/ 	printf("\x0E\x01\x09\x04C\x4553\x0E\x01\x08\x02\x1CDWas?!?\n<pause0A>Jetzt fliegt er auch noch!\n\n\n\x0E\x01\x09\x04B\x4026Ich glaube, er will direkt zum Tempel!\n<pause08>Los, holen wir den Kerl vom Himmel!")
          }

          void entrypoint_500_13() {
/*<476>*/ 	start()
/*<491>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\n\n\nIch spüre eine Veränderung an diesem\nOrt, die durch den Himmelsstrahl\nhervorgerufen wurde.")
/*<495>*/ 	printf("Gebieter, \x0E\x01\x12\x04\x00\x02ich spüre hier eine ähnliche\nAura wie die deines Paraschals. Es ist\nZeldas Aura.\n\nIch kann \x0E\x01\x12\x04\x00\x02dich mit meiner <pling><r<Aurasuche\n>>in diese Richtung führen.\n\n\nWünschst du weitere Erklärungen\nhierzu?[1]Bitte[2-]Nein")
/*<569>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<492>*/ 	switch (choice(2)) {
          	  case 0:
/*<493>*/ 		printf("\x0E\x01\x12\x04\x00\x05Sehr wohl, Gebieter.\n\n\n\nMit der Aurasuche kann ich Dinge, die\ndu suchst, erspüren, \x0E\x01\x12\x04\x00\x0CGebieter.\n\n\nJe näher sich das Ziel befindet, desto\n<r<stärker meine Reaktion>>. Außerdem\nändert sich der Signalton.\n\nZudem erscheint auf dem Zeiger ein\n<r<Pfeil>>, der die ungefähre Richtung, in\nder sich das Ziel befindet, angibt.")
          		flw_570:
/*<570>*/ 		open_dowsing_wheel(0)
/*<496>*/ 		printf("Nun halte (C) gedrückt, stelle Zelda\nals Ziel deiner Suche ein und weise\nmir eine Richtung.\x0E\x01\x11\x02\x6CD")
/*<565>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*<494>*/ 		printf("Ja, Gebieter.")
          		goto flw_570
          	}
          }

          void entrypoint_500_31() {
/*<143>*/ 	start()
/*<544>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<546>*/ 		{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 545, 'param3': 13}
/*<545>*/ 		printf("Link! Der <r<Siegelstein\n>>steckt in der Stirn des Verbannten!\n\n\n\x0E\x01\x09\x04\xE00\x13Wenn du ihn mit deinem Schwert\nhineinschlägst, müsste das Erfolg\nzeigen!")
          	  case 1:
/*<145>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<146>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<148>*/ 				printf("\x0E\x01\x09\x04\x10\x160DLos! Link!<pause1E>\n\n\n\nLenke den <r<Himmelsstrahl >>auf den\nSiegelstein!\n\n\n\x0E\x01\x09\x04\x11\x1700Schnell!")
          			  case 1:
/*<373>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 147, 'param3': 13}
/*<147>*/ 				printf("Link! Der <r<Siegelstein\n>>steckt in der Stirn des Verbannten!\n\n\n\x0E\x01\x09\x04\xE00\x13Wenn du ihn mit deinem Schwert\nhineinschlägst, müsste das Erfolg\nzeigen!")
          			}
          		  case 1:
/*<144>*/ 			printf("\x0E\x01\x09\x04\x08\x170FLink!\nDu musst sofort zum <r<Siegelstein >>in der\nMitte des Siegelhains!\n\n\x0E\x01\x09\x04\x14\xB00Dies ist kein gewöhnliches Beben!\nDas Böse, es wird wieder erwachen...")
          		}
          	}
          }

          void entrypoint_500_49() {
/*<168>*/ 	start()
/*<549>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<550>*/ 		printf("\x0E\x01\x09\x04\x10\x180FLink!\nDu musst das Böse in seine Schranken\nzurückweisen!\n\nSeine Kraft ist im Wachsen begriffen...\nFass dir ein Herz und tritt näher!")
          	  case 1:
/*<169>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<171>*/ 			printf("\x0E\x01\x09\x04\x10\x180DWeißt du, wie man\ndas Siegel verschließt?\n\n\nStelle dich vor den Stein und lenke den\n<r<Himmelsstrahl>> auf ihn!<pause1E>\nIch weiß, dass du es kannst...")
          		  case 1:
/*<170>*/ 			printf("\x0E\x01\x09\x04\x10\x180FLink!\nDu musst das Böse in seine Schranken\nzurückweisen!\n\nSeine Kraft ist im Wachsen begriffen...\nFass dir ein Herz und tritt näher!")
          		}
          	}
          }

          void entrypoint_500_66() {
/*<329>*/ 	start()
/*<331>*/ 	printf("\x0E\x01\x09\x04A\x4043Wuah, das war knapp! Mein Katapult\nhat mal wieder seinen Zweck erfüllt.\n\n\nUnd jetzt auf ihn! Beeil dich!")
          }

          void entrypoint_500_14() {
/*<440>*/ 	start()
/*<441>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\n\n\nDurch Drücken von (Z) kannst du\nObjekte oder Personen <g<anvisieren>>, und\nich kann dir dann berichten, welche\nInformationen ich über sie habe.\x0E\x01\x11\x02\x7CD\nRufe mich, indem du (v) drückst,\nwährend du etwas mithilfe von (Z)\n<r<anvisiert hast>>.\x0E\x01\x11\x02\x9CD\x0E\x01\x11\x02\x7CD")
          }

          void entrypoint_500_32() {
/*< 25>*/ 	start()
/*<542>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<543>*/ 		printf("\x0E\x01\x09\x04\x001Aaaaah!!!")
          	  case 1:
/*<149>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<150>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<151>*/ 				printf("\x0E\x01\x09\x04\x000Aaah... Ich... Jetzt mach schon, was die\nalte Frau dir gesagt hat!\n\n\nTriff den Stein mit dem Strahl aus\ndeinem Schwert oder so, das meinte\nsie doch?!?")
          			  case 1:
/*<153>*/ 				printf("\x0E\x01\x09\x04\x001Aaaaah!!!")
          			}
          		  case 1:
/*<152>*/ 			printf("\x0E\x01\x09\x04\x00\x15Wa... Was ist das?\nAlles wackelt?!?\n\n\nDie Erde, sie bewegt sich!\nWas zum...")
          		}
          	}
          }

          void entrypoint_500_67() {
/*<332>*/ 	start()
/*<333>*/ 	printf("\x0E\x01\x09\x04\x00&Hey! Link!\nMein Katapult ist bereit!\n\n\nWenn du meine Hilfe brauchst, dann\nrufe mich einfach durch Drücken\nvon (^)!\x0E\x01\x11\x02\x8CD")
          }

          void entrypoint_500_33() {
/*< 47>*/ 	start()
/*<313>*/ 	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          	  case 0:
/*<325>*/ 		switch (scene_flags[106 /* 0xC 04 */]) {
          		  case 0:
/*<314>*/ 			printf("\x0E\x01\x09\x04\x04\x202Schau her, Link!<pause1E>\nIch werde Zelda auf meine Weise\nunterstützen!")
          		  case 1:
/*<326>*/ 			printf("\x0E\x01\x09\x04\x00\x02Ach, Link?\nWeißt du, ich habe etwas nachgedacht.\n\n\nVielleicht hat die Alte doch nicht ganz\nso Unrecht. Ich bin einfach kein so\ngroßer Held wie du...\n\n\x0E\x01\x09\x04@\x4200Ich habe mich entschlossen,\nZelda auf meine Weise zu unterstützen.\nSieh her!")
/*<327>*/ 			scene_flags[10 'Sealed Grounds'][106 /* 0xC 04 */] = true;
          		}
          	  case 1:
/*<315>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*<316>*/ 			printf("\x0E\x01\x09\x04\x00-Wie... <pause1E>Was...<pause1E>\nIch bin einfach zu nichts\nzu gebrauchen<pause1E>!<pause1E>!<pause1E>!")
          		  case 1:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00=\x0E\x01\x08\x02\x1CDAaaargh!\n\n\n\n\x0E\x01\x09\x04\x00\x3A00\x0E\x01\x08\x02\x1CD\x0E\x01\x08\x02\x1CDNichts habe ich tun können!\n\n\n\n\x0E\x01\x09\x04\x00\x4000\x0E\x01\x08\x02\x1CD\x0E\x01\x08\x02\x2CDEinfach gar nichts!")
/*<317>*/ 			scene_flags[10 'Sealed Grounds'][105 /* 0xC 02 */] = true;
          		}
          	}
          }

          void entrypoint_500_50() {
/*<172>*/ 	start()
/*<559>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<560>*/ 		printf("Besiege den Verbannten, \x0E\x01\x12\x04\x00\x01Gebieter.\nFlucht ist keine Option.")
          	  case 1:
/*<173>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<174>*/ 			printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\nDu, \x0E\x01\x12\x04\x00\x02Gebieter, musst den Verbannten\njetzt in seine Schranken zurückweisen.\nDu kannst jetzt nicht fliehen.")
          		  case 1:
/*<175>*/ 			printf("Besiege den Verbannten, \x0E\x01\x12\x04\x00\x01Gebieter.\nFlucht ist keine Option.")
          		}
          	}
          }

          void entrypoint_500_68() {
/*<378>*/ 	start()
/*<488>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 489, 'param3': 6}
/*<489>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 407, 'param3': 47}
/*<407>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 400, 'param3': 32}
/*<400>*/ 	set_camera(55, 0)
/*<487>*/ 	{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 356, 'next': 396, 'param3': 15}
/*<396>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 260, 'next': 486, 'param3': 15}
/*<486>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 490, 'param3': 17}
/*<490>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 398, 'param3': 48}
/*<398>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 397, 'param3': 13}
/*<397>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 4, 'next': 399, 'param3': 14}
/*<399>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 523, 'param3': 16}
/*<523>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<387>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 386, 'param3': 13}
/*<386>*/ 	printf("Hey, Link! Gibt's das denn?\nDieser Kerl ist schon wieder zurück!")
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 391, 'param3': 13}
/*<391>*/ 	printf("Einen Moment! Ich bringe mich\nschnell in Stellung...")
/*<390>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 772, 'next': 421, 'param3': 14}
/*<421>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<414>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<417>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_34() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf("\x0E\x01\x09\x04\x00&Ab in den Wald von Phirone!\x0E\x01\x05\x04\n\x00")
/*< 99>*/ 	printf("Auf geht's!\x0E\x01\x05\x04\x1E\x00")
          }

          void entrypoint_500_51() {
/*<176>*/ 	start()
/*<557>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<558>*/ 		printf("\x0E\x01\x09\x04\x10\x180FLink!\nDu musst das Siegel, von dem das Böse\nzurückgehalten wird, wieder\nverschließen!\nDie Kraft des Bösen ist viel stärker,\nals sie es zuvor war. Pass auf dich auf!")
          	  case 1:
/*<177>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<179>*/ 			printf("\x0E\x01\x09\x04\x10\x180DDas Siegel ist ein weiteres Mal\ngebrochen...\n\n\nDu weißt, was du nun tun musst.\nGib nicht auf, ich weiß, dass du es\nschaffen wirst!")
          		  case 1:
/*<178>*/ 			printf("\x0E\x01\x09\x04\x10\x180FLink!\nDu musst das Siegel, von dem das Böse\nzurückgehalten wird, wieder\nverschließen!\nDie Kraft des Bösen ist viel stärker,\nals sie es zuvor war. Pass auf dich auf!")
          		}
          	}
          }

          void entrypoint_500_69() {
/*<409>*/ 	start()
/*<410>*/ 	printf("So! Jetzt bin ich dran!")
/*<411>*/ 	printf("Bewege das Katapult mithilfe von \x0E\x02\x04\x02\xECD\nund verwende die <r<Wii-Fernbedienung>>,\num zu zielen!\n\nDurch Drücken von (A) schießt du\ndie Bomben ab. Greif ihn an, wenn er\ndann benommen ist.")
/*<412>*/ 	printf("Wenn du dir mit der Bedienung des\nKatapults nicht sicher bist, drücke\neinfach (2), um nachzusehen!\x0E\x01\x11\x02\x5CD")
          }

          void entrypoint_500_17() {
/*<473>*/ 	start()
/*< 19>*/ 	set_camera(16, 0)
/*<102>*/ 	{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3330, 'next': 17, 'param3': 13}
/*< 17>*/ 	printf("Was sagst du da, Link?\n\n\n\nDu meinst also, dass die alte Frau in\ndem <r<Tempel>> dort weiß, wo sich <b<Zelda\n>>aufhält?")
/*< 20>*/ 	set_camera(17, 0)
/*<104>*/ 	printf("Hm...\nAlles klar, Link!\nDu hast deinen bescheidenen Beitrag\ngeleistet.\nJetzt bin ich dran!\n\n\n\n\x0E\x01\x09\x04\x0D\xB41Von jetzt ab werde ich mich persönlich\num die Rettung <b<Zeldas>> kümmern!")
/*<103>*/ 	{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 5632, 'next': 18, 'param3': 13}
/*< 18>*/ 	printf("Ich werde sie retten und mit ihr in den\nWolkenhort zurückkehren.<pause1E>")
/*<106>*/ 	set_camera(18, 0)
/*<107>*/ 	printf("\x0E\x01\x09\x04\x00\x0CIch werde um <b<Zeldas>> Hand anhalten,\nsie wird Ja sagen, und wir werden für\nimmer glücklich sein!")
/*<108>*/ 	set_camera(19, 0)
/*<112>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 512, 'next': 113, 'param3': 13}
/*<113>*/ 	printf("\x0E\x01\x09\x04\x00\x0DDu musst dir also gar keine\nHoffnungen mehr machen!")
/*<109>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 105, 'param3': 6}
/*<105>*/ 	printf("Ich gehe dann gleich mal zu der alten\nFrau!")
/*< 21>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 1024, 'next': 22, 'param3': 14}
/*< 22>*/ 	printf("\x0E\x01\x08\x02\x1CDViel Spaß noch im Leben...<pause2D>\n\x0E\x01\x08\x02\xFFCDLink!")
/*<110>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 256, 'next': 111, 'param3': 15}
/*<111>*/ 	set_camera(20, 0)
/*<114>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_35() {
/*< 54>*/ 	start()
/*<360>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 53, 'param3': 13}
/*< 53>*/ 	printf("\x0E\x01\x09\x04\xE00T\x0E\x01\x06\x02\x1CDAaargh!<pause0F>\n<r<\x0E\x01\x06\x02ÍDas ist... <pause0A>\x0E\x01\x06\x02\xFECDdas Ende!>>\x0E\x01\x05\x04(\x00")
          }

          void entrypoint_500_52() {
/*<180>*/ 	start()
/*<555>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<556>*/ 		printf("\x0E\x01\x09\x04\x10\x180FLink!\nDu musst das Siegel, von dem das Böse\nzurückgehalten wird, wieder\nverschließen!\nDie Kraft des Bösen ist viel stärker,\nals sie es zuvor war. Pass auf dich auf!")
          	  case 1:
/*<181>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<183>*/ 			printf("\x0E\x01\x09\x04\x10\x180DDas Siegel ist ein weiteres Mal\ngebrochen...\n\n\nDu weißt, was du nun tun musst.\nGib nicht auf, ich weiß, dass du es\nschaffen wirst!")
          		  case 1:
/*<182>*/ 			printf("\x0E\x01\x09\x04\x10\x180FLink!\nDu musst das Siegel, von dem das Böse\nzurückgehalten wird, wieder\nverschließen!\nDie Kraft des Bösen ist viel stärker,\nals sie es zuvor war. Pass auf dich auf!")
          		}
          	}
          }

          void entrypoint_500_18() {
/*<519>*/ 	start()
/*< 66>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 116, 'param3': 40}
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 44, 'param3': 6}
/*< 44>*/ 	set_camera(21, 0)
/*<467>*/ 	{'type': 'type3', 'subType': 2, 'param1': 28, 'param2': 356, 'next': 30, 'param3': 15}
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 28, 'param3': 32}
/*< 28>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 260, 'next': 31, 'param3': 15}
/*< 31>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 29, 'param3': 32}
/*< 29>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 270, 'next': 120, 'param3': 15}
/*<120>*/ 	set_camera(25, 0)
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 34, 'param3': 17}
/*< 34>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1077, 'param2': 13824, 'next': 32, 'param3': 13}
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 470, 'param3': 17}
/*<470>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 469, 'param3': 6}
/*<469>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<518>*/ 	set_camera(26, 0)
/*<129>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1082, 'param2': 15381, 'next': 472, 'param3': 13}
/*<472>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 471, 'param3': 6}
/*<471>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3605, 'param2': 2319, 'next': 24, 'param3': 13}
/*< 24>*/ 	printf("\x0E\x01\x09\x04\x4000Was ist das?\nDie Erde... sie bebt?!?")
/*<121>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 130, 'param3': 6}
/*<130>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 468, 'param3': 13}
/*<468>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 119, 'param3': 6}
/*<119>*/ 	set_camera(24, 0)
/*<118>*/ 	printf("\x0E\x01\x09\x04\x4001Aaah!\nEin... Erdbeben?!?")
/*< 45>*/ 	set_camera(27, 0)
/*< 71>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*< 68>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*< 67>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<115>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 125, 'param3': 13}
/*<125>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 128, 'param3': 17}
/*<128>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 23, 'param3': 13}
/*< 23>*/ 	printf("\x0E\x01\x09\x04\xE00\x10Link!\nSchnell, zum <r<Siegelstein >>in der Mitte\ndes Hains!")
/*<123>*/ 	{'type': 'type3', 'subType': 2, 'param1': 28, 'param2': 356, 'next': 122, 'param3': 15}
/*<122>*/ 	printf("\x0E\x01\x09\x04\xE00\x1653Wer weiß, wann das Böse erwacht?\nDu musst dich beeilen!")
/*<126>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 124, 'param3': 6}
/*<124>*/ 	set_camera(28, 0)
/*<264>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 366, 'param3': 15}
/*<366>*/ 	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
/*<127>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_01() {
          	start()
/*<  1>*/ 	printf("\x0E\x01\x09\x04B\x4300Na, wie gefällt dir mein kleines\nSpielzeug? Da machst du Augen, was?\nDas hättest du mir nicht zugetraut,\noder?\n\x0E\x01\x09\x04>\x4000Ich lege schon mal das nächste\nGeschoss ein. Sag mir Bescheid,\nwenn es losgehen soll!\n")
          }

          void entrypoint_500_36() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf("Dieses Wesen, das dort angegriffen\nwird, kann dir vielleicht behilflich sein.\nIch empfehle dir, ihm zu Hilfe zu\neilen.")
          }

          void entrypoint_500_53() {
/*<184>*/ 	start()
/*<185>*/ 	printf("\x0E\x01\x09\x04\x00&Hey! Link!\nMein Katapult ist bereit!\n\n\nWenn dieses Vieh die Wände\nhochklettern will, können wir ihm\ndamit eine Ladung verpassen!\n\nWenn du meine Hilfe brauchst, dann\nrufe mich einfach durch Drücken\nvon (^)!\x0E\x01\x11\x02\x8CD")
          }

          void entrypoint_500_70() {
/*<431>*/ 	start()
/*<432>*/ 	printf("\x0E\x01\x12\x04\x00\x01Gebieter, wenn du den <b<Paraschal>> nicht\nvor der Landung öffnest, kann das sehr\nernste Folgen für dich haben.\n\nDieses Mal habe ich dir geholfen, aber\nvergiss nicht, \x0E\x01\x12\x04\x00\x02Gebieter, beim nächsten\nMal (B) zu drücken.\x0E\x01\x11\x02\x1CD")
          }

