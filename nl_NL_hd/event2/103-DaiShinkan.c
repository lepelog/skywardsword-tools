          void entrypoint_103_01() {
          	start()
/*< 77>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*< 78>*/ 		printf("\x0E\x01\x09\x04\x00\x05Je hebt je Loftwing nog steeds niet\ngevonden?\n\n\nDenk er even rustig over na. Ik ben\nervan overtuigd dat het niet lang zal\nduren voor je een aanwijzing vindt.")
          	  case 1:
/*<  1>*/ 		switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          		  case 0:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x00\x01O, hallo, Link. Heb je je\nLoftwing al gevonden?\n\n\n<pause28>Je denkt dat <b<Ganderd >>betrokken is bij de\nverdwijning van je Loftwing? Die jongen\nveroorzaakt ook altijd problemen.")
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 71, 'param3': 32}
/*< 71>*/ 			{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': -1, 'next': 72, 'param3': 16}
/*< 72>*/ 			{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 0, 'next': 73, 'param3': 17}
/*< 73>*/ 			printf("Rector Gaepora, als dat waar is, dan is\ndat alleen maar beter. Ganderd heeft\nhet een stuk makkelijker gemaakt om\nde start van de race uit te stellen.\nIk neem aan dat zelfs Ganderd niet het\nlef zal hebben om hier openlijk over te\nklagen, gezien hij verantwoordelijk is\nvoor de vertraging.")
/*< 74>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 75, 'param3': 16}
/*< 75>*/ 			printf("Hm. Ja, hij lijkt zichzelf wel in een hoek\nte hebben gedreven, nietwaar? Nou, dat\nis dan geregeld.\n\n\x0E\x03\x01\x00Link, maak je geen zorgen,\nde race begint niet zonder jou. Neem dus\nrustig de tijd om je Loftwing te vinden.")
/*< 76>*/ 			scene_flags[0 'Skyloft'][92 /* 0xA 10 */] = true;
          		  case 1:
/*<103>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
          				flw_2:
/*<  2>*/ 				printf("\x0E\x01\x09\x04\x00\x05Maak je geen zorgen, Link, ik\nzal je probleem uitleggen aan meester\n<b<Rafaël>>.<pause0F> Ga naar hem toe en vraag hem\nom me op te zoeken in mijn kamer.\nVerder zou je aan enkele van de andere\nstudenten kunnen vragen of ze je Loft-\nwing hebben gezien. Ik heb een paar van\nhen bij het grote plein gezien.")
/*<102>*/ 				entrypoint_100_58();
          			  case 1:
/*<101>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 2, 'param3': 31}
          				goto flw_2
          			}
          		}
          	}
          }

          void entrypoint_103_02() {
/*< 13>*/ 	start()
/*< 14>*/ 	scene_flags[0 'Skyloft'][5 /* 0x1 20 */] = true;
/*< 15>*/ 	scene_flags[0 'Skyloft'][6 /* 0x1 40 */] = true;
/*< 16>*/ 	scene_flags[0 'Skyloft'][1 /* 0x1 02 */] = true;
/*< 42>*/ 	scene_flags[0 'Skyloft'][67 /* 0x9 08 */] = true;
          }

          void entrypoint_103_03() {
/*< 67>*/ 	start()
/*< 68>*/ 	printf("\x0E\x01\x09\x04\x00\x05Er lijken hier veel onverklaarbare\ndingen te gebeuren...\n\n\nWat zou er gebeuren als je de aan-\nwijzingen van die vreemde vrouw zou\nvolgen?")
          }

          void entrypoint_103_06() {
/*< 17>*/ 	start()
/*< 63>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 82>*/ 		switch (zone_temp_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_84:
/*< 84>*/ 			printf("\x0E\x01\x09\x04\x00\x04Ik heb er alle vertrouwen in dat je mijn\ndochter naar me terug zult brengen. Ik\nhoef verder geen verklaring. Succes,\nLink!")
/*< 83>*/ 			zone_temp_flags[19 /* 0x3 08 */] = true;
          		  case 1:
/*< 64>*/ 			printf("\x0E\x01\x09\x04\x00\x02Het is echt gebeurd, Link!\n\n\n\nDe godin...<pause1E> De godin en haar eiland zijn\nvan Skyloft verdwenen!\n[1]Het zit zo...[2]Eh...")
/*< 66>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_65:
/*< 65>*/ 				printf("Je hoeft niets te zeggen, Link!\n\n\n\n<y+<Als alle catastrofes zijn overwonnen, zal\nde godin terugkeren naar het oppervlak\nwaar alles eeuwen geleden is begonnen.>>\n\nDat zijn de laatste <r<geheime woorden>>\ndie hier op Skyloft zijn doorgegeven.<pause14>\nIk begrijp nu pas de betekenis van die\nwoorden. Ja...\nHet is duidelijk. Dit betekent dat het\nallemaal voorbij is...<pause14> En mijn Zelda...<pause0A>\nIs ze eindelijk veilig?\n[1]Het spijt me...[2]Nee.")
/*< 98>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_99:
/*< 99>*/ 					printf("Welke andere verrassingen het lot ook\nvoor je te wachten heeft staan, ik weet\ndat je elke uitdaging zult overwinnen.\nWe rekenen tenslotte op je.\nConcentreer je op je taak. Doe je best,\ndan kan het niet verkeerd gaan.")
          					goto flw_84
          				  case 1:
          					goto flw_99
          				}
          			  case 1:
          				goto flw_65
          			}
          		}
          	  case 1:
/*< 96>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*< 97>*/ 			printf("\x0E\x01\x09\x04\x00\x04Ik weet zeker dat ik zojuist een\ndonderend geluid heb gehoord.\n\n\nMisschien hielden mijn oude oren me voor\nde gek. Maar ik wil je niet ophouden.\nIk reken op jou om Zelda terug\nte brengen!")
          		  case 1:
/*< 87>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*< 88>*/ 				switch (zone_temp_flags[19 /* 0x3 08 */]) {
          				  case 0:
/*< 91>*/ 					printf("\x0E\x01\x09\x04\x00\x04Ik ben ervan overtuigd dat ik zo'n steen al\neens eerder heb gezien, maar ik kan me\nniet herinneren waar dat was.\n\nMisschien kan de waarzegger van\nSkyloft je er meer over vertellen?")
          				  case 1:
/*< 89>*/ 					printf("\x0E\x01\x09\x04\x00\x02Hallo, Link! Hoe verloopt\nje zoektocht?\n\n\nJe moet deze <r<steen der beproeving>> ergens\nin steken, zeg je?\n\n\nDie edelsteen... Ja, volgens mij heb ik\nwel iets gezien waar die steen in zou\npassen, maar ik kan me niet herinneren\nwaar dat was...")
/*< 90>*/ 					zone_temp_flags[19 /* 0x3 08 */] = true;
          				}
          			  case 1:
/*< 80>*/ 				switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          				  case 0:
/*< 81>*/ 					printf("Geweldig! Dus je hebt niet alleen Levias\ntot bedaren gebracht, maar ook de locatie\nvan de Triforce achterhaald?\n\n\x0E\x03\x01\x00Link, de laatste tijd ben\nje zo volwassen geworden dat het haast\nlijkt alsof je een andere persoon bent.\n\nDe problemen zijn nog niet voorbij,\nmaar ik heb er vertrouwen in dat je alle\nobstakels op je pad zult overwinnen.")
          				  case 1:
/*< 60>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*< 62>*/ 						{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 61, 'param3': 13}
/*< 61>*/ 						printf("Hm, dus Levias is bezeten... Wellicht kun\nje daar iets aan doen met de luchtboor-\naanval. Let er wel op dat je weet wat je\ndoet, want het is een riskante manoeuvre!")
          					  case 1:
/*< 34>*/ 						switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          						  case 0:
/*< 59>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4, 'next': 31, 'param3': 13}
/*< 31>*/ 							printf("Als je meer over de huidige locatie van\nLevias wilt weten, ga dan naar <b<meester\nCornuylius>>. Hij zou nu in zijn kamer\nmoeten zijn, die hiernaast is.")
          						  case 1:
/*< 85>*/ 							switch (story_flags[327 /* us: 805A9AFF 0x20, jp: 805ACD7F 0x20 */]) {
          							  case 0:
/*< 86>*/ 								printf("\x0E\x01\x09\x04\x00\x02Ken ik iemand die iets weet over de\nTriforce?\n\n\nOp Skyloft? Nee, ik denk niet dat iemand\nhier iets weet over een onderwerp waar\nal zo lang niet over is gesproken...")
          							  case 1:
/*< 20>*/ 								switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          								  case 0:
/*< 35>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 58, 'param3': 31}
/*< 58>*/ 									{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 21, 'param3': 13}
/*< 21>*/ 									printf("O, hallo, Link! Heb je nog\nnieuwe informatie ontdekt over de\nlocatie van mijn dochter?\n\nWat is er? Hm\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í Als je iets nieuws te\nweten bent gekomen, wil ik daar graag\nover horen.")
/*< 69>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 22, 'param3': 6}
/*< 22>*/ 									printf("\x0E\x01\x06\x02\xFECDHm...\x0E\x01\x06\x02Í Je wilt me iets vertellen, maar\ndat kan niet? Ik... begrijp het. Je hebt\ner vast een goede reden voor\x0E\x01\x06\x02\xFECD...")
/*< 70>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 37, 'param3': 6}
/*< 37>*/ 									printf("\x0E\x03\x01\x00Link, sinds ik je de laatste\nkeer sprak, heb ik veel nagedacht.\n\n\nJe kreeg, zonder waarschuwing of keuze,\neen missie opgedrongen. Maar ik zal je\nzoveel mogelijk helpen.\n\nIk ben wat ouder en ben niet meer\nin de kracht van mijn leven\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í maar\noude mannen als ik kunnen nog steeds\nbij van alles helpen!\nIk zal zoveel mogelijk van mijn\nkennis met je delen!\n\n\nAls je een vraag hebt over Skyloft,\nongeacht of je het over het heden of het\nverleden wilt hebben, hoor ik het graag.\n[1]Nu u het zegt...[2]Niet nu.")
/*< 23>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_25:
/*< 25>*/ 										printf("Wat ik weet over de <y+<Triforce>>? Hm\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í\n\n\n\n\x0E\x03\x01\x00Link, waar heb je dat woord\ngehoord?\n\n\nHet is waar dat de Triforce meerdere\nmalen in de oude teksten wordt genoemd.\n\n\nHelaas wordt de locatie van de Triforce\nniet in de oude geschriften vermeld.\nDeze locatie is verloren gegaan...")
/*< 26>*/ 										printf("Sorry, Link. Ik zeg het\nniet graag, maar ik heb weinig nuttige\nkennis over dit onderwerp.")
/*< 32>*/ 										story_flags[327 /* us: 805A9AFF 0x20, jp: 805ACD7F 0x20 */] = true;
          									  case 1:
/*< 24>*/ 										printf("Dus je hebt niets aan de wijsheid van\neen oude man als ik?\n\n\nNou, onthoud goed dat mijn kennis\nje nog goed van pas kan komen. Als\nje mijn hulp nodig hebt, kun je me\nhier vinden.")
          										goto flw_25
          									}
          								  case 1:
/*< 19>*/ 									switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          									  case 0:
/*< 57>*/ 										{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 5, 'next': 18, 'param3': 13}
/*< 18>*/ 										printf("\x0E\x03\x01\x00Link, ik reken op je.\n\n\n\nVind haar en breng haar zo snel\nmogelijk naar huis!")
          									  case 1:
/*< 11>*/ 										switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          										  case 0:
/*< 56>*/ 											{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 12, 'param3': 13}
/*< 12>*/ 											printf("Toon de twee draaiende zeilen de\nweg naar de lichttoren. De jongeling die\ndat doet, wordt naar de plek geleid\nwaar de legendarische liederen huizen.\n\x0E\x03\x01\x00Link, deze liedtekst wordt al\ngeneraties lang doorgegeven hier op\nSkyloft.\n\nHet is zeer waarschijnlijk dat de <r<twee\ndraaiende zeilen >>die in het lied worden\ngenoemd, zich ook op Skyloft bevinden.\n\nLet op: dit is maar een hypothese, maar\nhopelijk komt deze informatie van pas\nbij je zoektocht.")
          										  case 1:
/*< 50>*/ 											switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          											  case 0:
/*< 36>*/ 												{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 31}
/*< 55>*/ 												{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 13}
/*< 92>*/ 												printf("Je bent terug, Link! Het is\nfijn om te zien dat het goed met je gaat.\n\n\nHoe gaat het daar beneden? Heb je\nal iets over de locatie van Zelda\nkunnen achterhalen?")
/*< 94>*/ 												set_camera(10, 0)
/*< 93>*/ 												printf("\x0E\x01\x09\x04\x00\x05Hm... Begrepen\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Arme Zelda... Ze zal het\nvast niet makkelijk hebben daar beneden.\n\n\nMaar jij lijdt er ook onder, nietwaar?")
/*< 95>*/ 												set_camera(-1, 0)
/*<  4>*/ 												printf("Wat?<pause28> Wil je de tekst weten van het lied\ndat Zelda zong op de dag van de\nVleugelceremonie?\n\nEerlijk gezegd ben ik geen goede\nzanger...\n[1]Zeg de tekst![2]Zing de tekst!")
/*<  5>*/ 												switch (choice(2)) {
          												  case 0:
/*<  7>*/ 													printf("Ik mag de tekst opzeggen? Wat een\nopluchting. Je liet me wel even schrikken,\nhoor. Maar de tekst van het lied gaat zo...")
          													flw_8:
/*<  8>*/ 													printf("<y+<\x0E\x01\x06\x02\xFCCDO jongeling, neem de godin bij de hand.\nVerbind hemel en aarde.\nBreng licht naar het land.>>\x0E\x01\x06\x02Í\n\nDat is het eerste deel, maar als ik het me\ngoed herinner, is er verderop in het lied\neen deel dat je wellicht in de huidige\nsituatie van pas kan komen.\n<y+<\x0E\x01\x06\x02\xFCCDO, toon de twee draaiende zeilen\nde weg naar de lichttoren,\nom daarna een tijd te verwijlen\nmet het hemelse lied dat je zult horen.\x0E\x01\x06\x02Í>>")
/*<  9>*/ 													printf("Volgens mij is dat het hele lied.\n\n\n\nDe <r<lichttoren>> in het lied bestaat echt.\nJe hebt vast al eens de toren op het\ngrote plein gezien. Maar ik weet niet\nwaar die twee draaiende zeilen zijn\x0E\x01\x06\x02\xFECD...\nVolgens dit lied gebeurt er iets als\niemand deze draaiende zeilen de\nweg naar de toren toont?\n\nMaar hoe doe je dat en wat betekent\nhet? <r<Twee draaiende zeilen>>. Hm\x0E\x01\x06\x02\xFECD...")
/*< 10>*/ 													story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */] = true;
/*<100>*/ 													story_flags[142 /* us: 805A9AEE 0x01, jp: 805ACD6E 0x01 */] = true;
          												  case 1:
/*<  6>*/ 													printf("Kijk, ik zei al dat ik geen goede\nzanger ben. Maar als het om de tekst\nvan het lied gaat, kan ik hem wel voor\nje opzeggen...")
          													goto flw_8
          												}
          											  case 1:
/*< 52>*/ 												switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          												  case 0:
/*< 51>*/ 													printf("\x0E\x01\x09\x04\x00\x02O, Link! Is het je al gelukt\nom aanwijzingen te vinden over de\nlocatie van Zelda?\n\nHet spijt me dat je dit in je eentje moet\ndoen, maar we moeten voorkomen dat\nde rest van het dorp te horen krijgt wat\ner op die vreselijke avond is gebeurd.\nAls het dorp wist wat je die avond hebt\nmeegemaakt, zou dit verwarring zaaien.\n\n\nAlleen jij kunt Zelda vinden. Veel succes\nen wees voorzichtig.")
          												  case 1:
/*< 53>*/ 													printf("\x0E\x01\x09\x04\x00\x01Ik heb gehoord dat onze zwaardmeester,\nde <r<riddercommandant>>, ook weet dat je\nSkyloft gaat verlaten. Hij maakt\nzich zorgen om je.\nGa nog even naar de trainingsruimte\nom met hem te praten voor je vertrekt.\n\n\n\x0E\x03\x01\x00Link, wees voorzichtig daar\nbeneden. Ik reken op jou om Zelda\nte vinden!")
          												}
          											}
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_103_07() {
/*< 27>*/ 	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 28, 'param3': 13}
/*< 28>*/ 	printf("\x0E\x03\x01\x00Link, wacht even!")
/*< 43>*/ 	set_camera(1, 0)
/*< 44>*/ 	{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 100, 'next': 29, 'param3': 15}
/*< 29>*/ 	printf("Weet je, er is iemand met veel kennis\ndie van pas kan komen...\n\n\nJe kent vast <b<Levias>> wel, de <r<wolkenhoeder>>\ndie ons rijk al eeuwen bewaakt?\n\n\n\x0E\x01\n\x04\x02ÍLevias heeft een encyclopedische kennis\nvan onze wereld.\n\n\nAls iemand op Skyloft of daarbuiten\niets over de Triforce weet, dan is hij dat.\n[1]Waar vind ik hem?[2]Encyclopedisch?")
/*< 38>*/ 	switch (choice(2)) {
          	  case 0:
/*< 39>*/ 		printf("Ja... Ik was al bang dat je dat zou\nvragen...")
          		flw_45:
/*< 45>*/ 		set_camera(3, 0)
/*< 30>*/ 		printf("Ik neem aan dat je tijdens je reizen ook\nde gigantische <r<donderwolk >>hebt gezien,\ndie plots in onze hemel is verschenen.\n\nIk heb onlangs geruchten gehoord dat\nLevias in die wolk vastzit.")
/*< 46>*/ 		set_camera(4, 0)
/*< 41>*/ 		printf("Ik heb <b<meester Cornuylius>> gevraagd om\ndeze zorgwekkende wolk te onderzoeken\nom erachter te komen of de geruchten\nkloppen.\nIk wilde hem al eerder ernaar vragen,\nmaar ben vergeten dit te doen na de\nverdwijning van Zelda.\n\n<b<Meester Cornuylius>> kan mij later wel de\ndetails vertellen. Ga jij maar gelijk naar\nhem toe om te horen wat hij met zijn\nonderzoek heeft achterhaald.")
/*< 33>*/ 		story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */] = true;
/*< 47>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 40>*/ 		printf("Ja, zijn kennis is bijna grenzeloos,\nmaar ik vrees dat het niet makkelijk\nzal zijn om hem te ontmoeten...")
          		goto flw_45
          	}
          }

          void entrypoint_103_08() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf("\x0E\x01\x09\x04\x00\x17Wat sta je hier nog? Volg de anderen!\nSpring van de rand en roep je Loftwing!")
          }

