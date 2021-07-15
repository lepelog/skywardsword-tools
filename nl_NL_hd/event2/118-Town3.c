          void entrypoint_118_05() {
/*<  2>*/ 	start()
/*<280>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<281>*/ 		printf("\x0E\x01\x09\x04\n\xA12Wat gek... Ik kan het standbeeld van de\ngodin niet meer zien. Dat is vreemd...\n\n\nAch, het zal wel aan mij liggen.")
          		flw_55:
/*< 55>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 56>*/ 			printf("\x0E\x01\x09\x04\x00\x09O, is Sijsje weer terecht?\n\n\n\n\x0E\x01\x09\x04\x00\xE00Je hebt haar gevonden? Goed gedaan,\nzeg! Je hebt laten zien waartoe een\nstudent van de ridderacademie in staat is!\n\n\x0E\x01\x09\x04\x00\x400Laat haar moeder maar gauw weten dat\nze veilig is! Hun huis staat vlakbij het\nwater.")
          		  case 1:
/*< 31>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 34>*/ 				printf("\x0E\x01\x09\x04\x00\x01O, jee! Wat is er aan de hand,\nLink? Je ziet zo pips!\n\n\n[1]Het gaat om Sijsje![2-]O, echt?")
/*< 35>*/ 				switch (choice(2)) {
          				  case 0:
/*< 27>*/ 					printf("\x0E\x01\x09\x04\x00\x506Wat zei je?! Sijsje is vermist?\n\n\n\n\x0E\x01\x09\x04\x00\x500Ze is meegenomen door een monster?!\n\n\n\n\x0E\x01\x09\x04\x0B\x400Je denkt toch niet dat dit iets te maken\nheeft met al die verhalen over een eng\nmonster dat al heel lang hier op Skyloft\nwoont?\n\x0E\x01\x09\x04\n\x500Men zegt dat het monster in het holst van\nde nacht verschijnt om mensen te laten\nschrikken en zelfs kinderen te ontvoeren!\n\n\x0E\x01\x09\x04\x00\x400Het zijn vast maar kampvuurverhalen die\niemand heeft verzonnen om kinderen\nbang te maken, maar toch...")
          				  case 1:
/*< 48>*/ 					printf("\x0E\x01\x09\x04\x00\x04Nou, daar leek het in ieder geval op. Als\ner niets aan de hand is, hoef je je nergens\nzorgen om te maken!")
          				}
          			  case 1:
/*<282>*/ 				switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          				  case 0:
/*<284>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 283, 'param3': 31}
/*<283>*/ 					printf("\x0E\x01\x09\x04\x00\x06De moeder van Sijsje riep om haar\ndochter. Ik vraag me af wat er is\ngebeurd...")
          				  case 1:
/*< 51>*/ 					printf("\x0E\x01\x09\x04\x0B\xE01Ik hoorde dat je de Vleugelceremonie hebt\ngewonnen! Proficiat, dat is fantastisch!\n\n\n\x0E\x01\x09\x04\x00\xA00Maar je lijkt er niet erg blij om te zijn.\nWat is er aan de hand?")
          				}
          			}
          		}
          	  case 1:
/*<488>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<489>*/ 			printf("\x0E\x01\x09\x04\n\xC12Wat was dat voor een luid gedonder?")
          			goto flw_55
          		  case 1:
          			goto flw_55
          		}
          	}
          }

          void entrypoint_118_22() {
/*<152>*/ 	start()
/*<148>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<170>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 512, 'next': 156, 'param3': 13}
/*<156>*/ 		printf("\x0E\x01\x09\x04\x00\nHa! Dit is geweldig!\n\n\n\nEr zijn dus nog talloze planten die erop\nwachten om ontdekt te worden. De\nonderzoeker in me kan niet wachten!")
/*<263>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2560, 'next': 264, 'param3': 13}
/*<264>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 262, 'param3': 17}
/*<262>*/ 		printf("Ik ben je zo dankbaar, Link!\nJe hebt werkelijk geen idee hoe belangrijk\ndeze ontdekking voor me is!\n\nIk zal deze plant.. of wat het ook is... goed\nverzorgen. Laat het me weten als je nog\nmeer interessante vondsten doet!")
/*<155>*/ 		story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */] = true;
/*<299>*/ 		story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<157>*/ 		give_gratitude_crystals();
          	  case 1:
/*<168>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 512, 'next': 171, 'param3': 13}
/*<171>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 172, 'param3': 32}
/*<172>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 153, 'param3': 17}
/*<153>*/ 		printf("\x0E\x01\x09\x04\x00SWauw! Kijk eens aan! Deze plantensoort\nheb ik nog nooit eerder gezien!")
/*<169>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 1280, 'next': 154, 'param3': 13}
/*<154>*/ 		printf("Wat hebben we hier? Valt dit onder de\nclassificatie flora of fauna. Ik bedoel, is\nhet een plant of een dier?\n\nHmmm... Dit zou weleens een gigantische\nontdekking kunnen zijn! Een echte\nprimeur!")
/*<147>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_118_06() {
/*<  3>*/ 	start()
/*<373>*/ 	switch (zone_temp_flags[11 /* 0x0 08 */]) {
          	  case 0:
          		flw_57:
/*< 57>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 58>*/ 			printf("\x0E\x01\x09\x04\x09\x257Hmm.<pause0A>.<pause0A>. Het meisje dat als vermist was\nopgegeven, is weer terecht?\n\n\nVan een ontvoering was dus geen sprake?\nWat een opluchting, zeg!\n\n\n\x0E\x01\x09\x04\x00\x609Nou, die zaak is dan opgelost! Goed werk,\ndappere ridder!")
          		  case 1:
/*<398>*/ 			switch (story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */]) {
          			  case 0:
/*<399>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<403>*/ 					printf("\x0E\x01\x09\x04\x00\x1557Hmm. Volgens hem moet je met je zwaard\ntegen <r<de grafsteen in de buurt van de\nboom <g<slaan <r<>>en hem dan <g<verplaatsen>>... om\neen monster te vinden?\n\x0E\x01\x09\x04\x00\x1513Hoe dan ook, je kunt na zonsondergang\nbeter niet buiten rondlopen.")
          				  case 1:
/*<400>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 401, 'param3': 31}
/*<401>*/ 					printf("\x0E\x01\x09\x04\x00\x01O, heb je met de oude man in De Oranje\nPoen gesproken?\n\n\nHmm. Volgens hem moet je met je zwaard\ntegen <r<de grafsteen in de buurt van de\nboom <g<slaan <r<>>en hem dan <g<verplaatsen>>...\nom een monster te vinden?\n\x0E\x01\x09\x04\x00\x1513Waarschijnlijk is het een hoop gebakken\nlucht\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Hoe dan ook, je kunt na zons-\nondergang beter niet buiten rondlopen.")
/*<402>*/ 					zone_temp_flags[11 /* 0x0 08 */] = true;
          				}
          			  case 1:
/*< 32>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<333>*/ 					switch (zone_temp_flags[11 /* 0x0 08 */]) {
          					  case 0:
          						flw_46:
/*< 46>*/ 						printf("\x0E\x01\x09\x04\x11\x200Je wilt weten waar de oude man is?\n\n\n\n\x0E\x01\x09\x04\x00\x200Ik geloof dat hij vaak bij <r<De Oranje Poen\n>>is, ten oosten van hier. Daar zit hij vaak\nom de tijd te doden.\n\n\x0E\x01\x09\x04\x12\x200Je moet er natuurlijk wel met je Loftwing\nheen vliegen. Vergeet dat niet.")
/*<334>*/ 						zone_temp_flags[11 /* 0x0 08 */] = true;
          					  case 1:
/*<289>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 36, 'param3': 31}
/*< 36>*/ 						printf("\x0E\x01\x09\x04\x00\x1513Heb je het gehoord? Er is een kind\nvermist dat op de begraafplaats aan het\nspelen was.\n\n\x0E\x01\x09\x04\x12\x1500Niet te geloven. Denk je echt dat er in\nons gezellige dorpje monsters zijn die\nkinderen ontvoeren?\n[1]Zeker weten![2-]Geen idee...")
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							printf("\x0E\x01\x09\x04\x01\xC06Wat?! Het kan dus echt zo zijn dat ze\ndoor een monster is meegenomen?\n\n\n\x0E\x01\x09\x04\x00\xC00Laten we helder blijven denken. Dit klinkt\nallemaal wel erg ongeloofwaardig.\n<pause1E>O<pause0A>.<pause0A>.<pause0A>.<pause0A>\n\n\x0E\x01\x09\x04\x09\x200Maar hier in de buurt woont een <pling><r<oude\nman >>die altijd tiert over monsters die zich\nhier op Skyloft schuilhouden...\n\n\x0E\x01\x09\x04\x12\x200Iedereen weet dat hij een beetje maf is,\ndus niemand neemt hem serieus.")
          							goto flw_46
          						  case 1:
/*< 47>*/ 							printf("\x0E\x01\x09\x04\x12\x1557Je doet er wel erg laconiek over, vind je\nniet? Ik bedoel, er is een kind uit ons\ndorp verdwenen!")
          						}
          					}
          				  case 1:
/*<287>*/ 					switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          					  case 0:
/*<288>*/ 						printf("\x0E\x01\x09\x04\x00\x1504Ik heb gehoord dat er een kleine meid\nwordt vermist!")
          					  case 1:
/*< 52>*/ 						printf("\x0E\x01\x09\x04\x00\x501O! Jij hebt toch de Vleugelceremonie\ngewonnen?\n\n\n\x0E\x01\x09\x04\x0C\x200En dat nieuwe uniform staat je werkelijk\nfantastisch!\n\n\n\x0E\x01\x09\x04\x0C\x500Als je zo doorgaat, ben je binnen de\nkortste tijd een ridder.")
          					}
          				}
          			}
          		}
          	  case 1:
/*<285>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<286>*/ 			printf("\x0E\x01\x09\x04\x09\x1501Goeie genade! De grond begon te beven...\nEn een moment later verdween het eiland\nvan de godin!\n\n\x0E\x01\x09\x04\x12\x200O, trouwens...")
          			goto flw_57
          		  case 1:
/*<490>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<491>*/ 				printf("\x0E\x01\x09\x04\x00\x13De aarde schudde hevig! Wat zou dat\nhebben veroorzaakt?\n\n\n\x0E\x01\x09\x04\x12\x200O, en nu je er toch bent...")
          				goto flw_57
          			  case 1:
          				goto flw_57
          			}
          		}
          	}
          }

          void entrypoint_118_23() {
/*<204>*/ 	start()
/*<206>*/ 	printf("\x0E\x01\x09\x04\x00\x02Wat is er aan de hand, Link?")
/*<207>*/ 	set_camera(11, 0)
/*<208>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 72, 'param3': 17}
/*< 72>*/ 	printf("Ben je geïnteresseerd in die windmolen?\n\n\n\nHij is erg slim ontworpen, hoor. Je kunt\nde windmolen namelijk zo draaien dat hij\naltijd wind vangt.")
/*<177>*/ 	set_camera(8, 0)
/*<196>*/ 	{'type': 'type3', 'subType': 2, 'param1': 32, 'param2': 0, 'next': 197, 'param3': 15}
/*<197>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 100, 'next': 175, 'param3': 15}
/*<175>*/ 	printf("Nou ja... Dat wás tenminste zo. Er zat een\nkleine <r<propeller>> aan de windmolen waar-\nmee je hem kon draaien.\n\nDat ding is er jaren geleden vanaf\ngevallen. De propeller is waarschijnlijk\nover de rand gegaan en onder de wolken\nverdwenen.")
/*<195>*/ 	set_camera(4, 0)
/*<178>*/ 	set_camera(5, 0)
/*<176>*/ 	printf("Sindsdien wordt die windmolen niet meer\ngebruikt.")
/*<179>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 181, 'param3': 6}
/*<181>*/ 	set_camera(9, 0)
/*<180>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 75, 'param3': 6}
/*< 75>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 257, 'param3': 51}
/*<257>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 258, 'param3': 50}
/*<258>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 76, 'param3': 17}
/*< 76>*/ 	printf("Ik stel voor dat u de <r<propeller van de\nwindmolen >>terughaalt van beneden de\nwolken, zodat we de windmolen opnieuw\nkunnen afstellen.")
/*< 77>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 165, 'param3': 36}
/*<165>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 259, 'param3': 16}
/*<259>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 198, 'param3': 6}
/*<198>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf("\x0E\x01\x09\x04\x0C\x800Hmm? Wat? Of ik de windmolen weer\naan de praat zou kunnen krijgen als je me\ndie propeller brengt?\n\nIk zou het natuurlijk kunnen proberen...")
/*<199>*/ 	set_camera(12, 0)
/*<200>*/ 	printf("Maar hoe wil je die propeller vinden? Hij\nis onder de wolken verdwenen, dus die\nzien we nooit meer terug.")
/*<202>*/ 	set_camera(10, 0)
/*<203>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2048, 'next': 79, 'param3': 13}
/*< 79>*/ 	printf("Maar\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x0C\xC13 Wacht eens even.\n\n\n\n<b<Rogyr>> van de werkplaats heeft me ooit\ngeprobeerd wijs te maken dat familie van\nhem met een <r<vliegende robot >>troep van\nonder de wolken naar boven heeft gehaald.\nVan onder de wolken... Ha! Maar dat\nverhaal wordt al vele jaren rondverteld,\ndus dat moeten we wel met een korreltje\nzout nemen.")
/*< 74>*/ 	story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */] = true;
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_118_07() {
/*<  4>*/ 	start()
/*<335>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<336>*/ 		printf("\x0E\x01\x09\x04\x00\x01Het standbeeld van de godin is weg! Wat\ndoen we nu?!\n\n\nHet wemelde daar van de insecten, dus\nhet was de ideale plek om insecten te\nvangen!")
          	  case 1:
/*< 60>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
/*<405>*/ 			switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          			  case 0:
/*<409>*/ 				switch (story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */]) {
          				  case 0:
/*<447>*/ 					switch (zone_temp_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*<406>*/ 						printf("\x0E\x01\x09\x04\x00\x01Ik moet een manier zien te vinden om\nBeedles wolkenwinkel te bereiken. Anders\nkom ik nooit aan een net!\n\nDan breng ik daarna direct een bezoekje\naan Rogyr in zijn werkplaats. Hij kan\nmijn net dan nog groter maken!")
          					  case 1:
/*<451>*/ 						entrypoint_118_28();
          					}
          				  case 1:
/*<410>*/ 					printf("\x0E\x01\x09\x04\x00\x01Hoi, Link!\n\n\n\nWAT? Ben je in Beedles wolkenwinkel\ngeweest? Zonder mij?! Wat oneerlijk!")
/*<411>*/ 					story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
/*<446>*/ 					zone_temp_flags[8 /* 0x0 01 */] = true;
          				}
          			  case 1:
/*<407>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ahhh, het wachten is ondraaglijk! Ik wil\nzo graag een net hebben! Hoe kan ik\nBeedles wolkenwinkel bereiken?")
          			}
          		  case 1:
/*< 59>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x01Heb je Sijsje gevonden?!\n\n\n\n\x0E\x01\x09\x04\x0F\x1300Ik hoop dat ze buiten mag spelen! Ik was\nal bang dat ze was opgegeten!")
          			  case 1:
/*< 33>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<404>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 420, 'param3': 31}
/*<420>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<421>*/ 						printf("\x0E\x01\x09\x04\x00\x01Hoi, Link!\n\n\n\nWAT? Ben je in Beedles wolkenwinkel\ngeweest? Zonder mij?! Wat oneerlijk!")
/*<422>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          						flw_29:
/*< 29>*/ 						printf("\x0E\x01\x09\x04\x00\x06Sijsje?\n\n\n\n\x0E\x01\x09\x04\x12\x900Ik heb haar gisteren wel bij de\n<r<begraafplaats>> zien spelen...\n\n\n\x0E\x01\x09\x04\n\x900Toen mijn moeder me riep, ben ik naar\nhuis gegaan. Ik weet niet wat ze daarna\nheeft gedaan.\n\n\x0E\x01\x09\x04\x01\x900Hoezo? Is er iets gebeurd?")
          					  case 1:
/*< 38>*/ 						printf("\x0E\x01\x09\x04\x10\x1301Hmm... Ik vraag me af hoe ik aan een\nnet uit Beedles wolkenwinkel kom.\n[1]Waar is Sijsje?[2]Beedles winkel?")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_29
          						  case 1:
/*< 49>*/ 							printf("\x0E\x01\x09\x04\x00\x04Ik probeer een manier te vinden om in\nBeedles wolkenwinkel te komen.\n\n\n\x0E\x01\x09\x04\x12\x900Heb je de grote bel gezien die aan zijn\nwinkel hangt? Als je die luidt, stopt\nBeedle voor je.\n\n\x0E\x01\x09\x04\x10\x1300Maar omdat hij zo hoog hangt, moet je er\niets naartoe <pling><r<katapulteren>>. Anders raak je\ndat ding nooit.\n\nAls je Beedles wolkenwinkel even niet\nkunt vinden, zie je op de <g<kaart >>precies\nwaar hij is.")
          						}
          					}
          				  case 1:
/*<374>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<375>*/ 						printf("\x0E\x01\x09\x04\x00\x01Hoi, Link!\n\n\n\nWAT? Ben je in Beedles wolkenwinkel\ngeweest? Zonder mij?! Wat oneerlijk!")
/*<408>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          					  case 1:
/*<290>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 50, 'param3': 31}
/*< 50>*/ 						printf("\x0E\x01\x09\x04\x00\x01Kijk, daarboven zweeft <b<Beedles\nwolkenwinkel>>!\n\n\n\x0E\x01\x09\x04\n\x1300Hij verkoopt <r<netjes>>! Ik wil er zo graag\neen hebben!\n\n\n\x0E\x01\x09\x04\x12\x900Er hangt een grote bel aan de winkel.\nAls je die weet te luiden, stopt Beedle\nvoor je!\n\n\x0E\x01\x09\x04\x10\x1300Het enige probleem is dat die bel vrij\nhoog hangt... Je zult er iets naartoe\nmoeten <pling><r<katapulteren >>om hem te kunnen\nluiden!")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_24() {
/*<323>*/ 	start()
/*<324>*/ 	printf("\x0E\x01\x09\x04\x00\x04Als er iemand komt, schrikt ie zich echt\neen ongeluk. Volgens hem komt dat\ndoordat ik niet op een plant lijk, koe-kwie.\n\n\x0E\x01\x09\x04\x00\x12Ik moet stil blijven en niet bewegen.\n\n\n\x0E\x01\x09\x04\x09\x13\nDat is niet veel anders dan toen ik nog in\nhet woud leefde, kwie!")
          }

          void entrypoint_118_08() {
/*<  5>*/ 	start()
/*< 63>*/ 	switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          	  case 0:
/*<471>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*<475>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<472>*/ 				printf("\x0E\x01\x09\x04\x00\xD0FO, hoi, Link. Heb je mijn man\ntoevallig ergens gezien?\n\n\nSinds het 's nachts zo stil is, trekt hij er\nsteeds op uit om de reden daarvoor te\nachterhalen. Maar wat als hij een monster\ntegen het lijf loopt?")
          			  case 1:
/*<476>*/ 				printf("\x0E\x01\x09\x04\x0C\xE08\x0E\x03\x01\x00Link, ik ben zo blij. Sinds Sijsje\nterug is, trekt ze er niet meer alleen op\nuit.\n\nNam haar vader maar een voorbeeld aan\nhaar... Hij knijpt er altijd tussenuit.")
          			}
          		  case 1:
/*< 66>*/ 			printf("\x0E\x01\x09\x04\x0C\xE08Bedankt dat je Sijsje voor me hebt\ngevonden, Link.\n\n\nIk moet de aardige meneer die op haar\nheeft gepast ook gauw bedanken.")
          		}
          	  case 1:
/*< 62>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*<424>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 31}
/*<142>*/ 			switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          			  case 0:
/*< 64>*/ 				printf("\x0E\x01\x09\x04\x0C\xE14O, Link!\n\n\n\n\x0E\x01\x09\x04\x00\x800Dankzij jou is mijn lieve Sijsje weer veilig\nthuis! Ik kan je niet genoeg bedanken.\n\n\n\x0E\x01\x09\x04\x09\x800Ik kan eindelijk weer lachen! Ik ben je\neeuwig dankbaar.")
/*< 65>*/ 				story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */] = true;
/*<144>*/ 				give_gratitude_crystals();
          			  case 1:
/*<143>*/ 				printf("\x0E\x01\x09\x04\x0C\xE13O! Je hebt Sijsje gevonden?\n\n\n\n\x0E\x01\x09\x04\x0F\xE00Hmm. Dus ze is bij een vriendelijk en\nvolwassen iemand... Dat is een hele\ngeruststelling, maar toch hoop ik dat ze\ngauw weer naar huis komt!")
          			}
          		  case 1:
/*<492>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*<423>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 278, 'param3': 31}
/*<278>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<279>*/ 					printf("\x0E\x01\x09\x04\x0B\xD12Waar gaat het heen met deze wereld? Het\neiland van de godin stort naar beneden en\nSijsje is nog steeds nergens te bekennen...\nMijn lieve Sijsje...\nAlsjeblieft, Link! Vind haar zo\nsnel als je kunt!\n\n\n\x0E\x01\x09\x04\x09\xD00Je... denkt er toch niet over na om de\nzoektocht te staken?!")
          				  case 1:
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x0B\xD12Mijn kleine Sijsje... <pause0A>Alsjeblieft...<pause0A> Vind\nmijn dochter voordat het te laat is.\n\n\nIk zou niet weten wat ik moet doen als\nhaar iets zou overkomen.")
          				}
          			  case 1:
/*<493>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 31}
          			}
          		}
          	}
          }

          void entrypoint_118_25() {
/*<343>*/ 	start()
/*<364>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 276, 'param3': 32}
/*<276>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<277>*/ 		printf("\x0E\x01\x09\x04\x1509\xD00O, nee! Dit is verschrikkelijk! Het eiland\nvan de godin is naar beneden gestort! Ik\nwas daar net op zoek naar Sijsje...\n\nHeb jij haar gezien?! Mijn lieve Sijsje?!\n[1]Helaas niet.[2]Wie is Sijsje?")
          		flw_18:
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 19>*/ 			printf("\x0E\x01\x09\x04\x150D\xD12Hm... Oké.")
          			flw_21:
/*< 21>*/ 			printf("\x0E\x01\x09\x04\x150F\xD00Alsjeblieft, Link, wil je me\nhelpen haar te vinden? Ik heb overal\ngezocht, maar tevergeefs.\n\n\x0E\x01\x09\x04\x1509\xD00Ik heb iedereen om hulp gevraagd.\nSommigen vertelden me dat ze samen met\neen duistere gestalte is gezien.\n\n\x0E\x01\x09\x04\x150B\xD00Iemand anders zei zelfs dat ze weg werd\ngedragen door een monster. Een monster!\n\n\n\x0E\x01\x09\x04\x150E\xD00Ze is vast ontvoerd! Zo'n schattig en lief\nmeisje... Iemand moet haar hebben\nmeegenomen!")
          			flw_22:
/*< 22>*/ 			printf("\x0E\x01\x09\x04\x1509\xD00Alsjeblieft, je moet Sijsje voor me vinden!\nZe is vast enorm bang en dat breekt mijn\nhart!\n\n\x0E\x01\x09\x04\x150F\xD00Alsjeblieft, Link!\n[1]Ik zal haar vinden.[2-]Nee, sorry...")
/*< 23>*/ 			switch (choice(2)) {
          			  case 0:
/*< 45>*/ 				printf("\x0E\x01\x09\x04\x150C\xE14Bedankt! De ridderacademie mag trots\nzijn op een student als jij.\n\n\n\x0E\x01\x09\x04\x1500\x800Ik reken op je!")
/*<  7>*/ 				story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */] = true;
/*<347>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x1509\xD12En jij beschouwt jezelf echt als ridder in\nopleiding? Het is toch de plicht van een\nridder om de mensen uit het dorp te\nbeschermen?!")
          				goto flw_22
          			}
          		  case 1:
/*< 20>*/ 			printf("\x0E\x01\x09\x04\x1509\xD12Mijn dochter! Een klein, schattig meisje\nvan vijf!")
          			goto flw_21
          		}
          	  case 1:
/*< 17>*/ 		printf("\x0E\x01\x09\x04\x1509\xD00Goed dat ik je hier tref! Heb je mijn\nSijsje toevallig onlangs nog gezien?\n[1]Helaas niet.[2]Wie is Sijsje?")
          		goto flw_18
          	}
          }

          void entrypoint_118_09() {
/*< 10>*/ 	start()
/*<260>*/ 	set_camera(13, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 107, 'next': 11, 'param3': 24}
/*< 11>*/ 	printf("\x0E\x01\x0D\x02\x1900AAAAAAAAAA!")
/*< 94>*/ 	scene_flags[0 'Skyloft'][66 /* 0x9 04 */] = true;
/*<261>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_118_26() {
/*<348>*/ 	start()
/*<351>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 352, 'param3': 32}
/*<352>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 356, 'param3': 32}
/*<356>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5386, 'param2': 3072, 'next': 355, 'param3': 13}
/*<355>*/ 	set_camera(15, 0)
/*<353>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 8, 'next': 350, 'param3': 16}
/*<350>*/ 	printf("\x0E\x01\x09\x04\x1509\xD11Sijsje! Sijsje! Waar zou ze toch zijn?!")
/*<357>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 349, 'param3': 13}
/*<349>*/ 	printf("O, Sijsje... Waar ben je toch?\n\n\n\nStel nou dat ze... ontvoerd is!")
/*<354>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<372>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 366, 'param3': 16}
/*<366>*/ 	printf("\x0E\x01\x09\x04\x150E\xD11Ah! \x0E\x03\x01\x00Link!")
/*<362>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 361, 'param3': 47}
/*<361>*/ 	set_camera(16, 0)
/*<360>*/ 	{'type': 'type3', 'subType': 2, 'param1': 49, 'param2': 356, 'next': 359, 'param3': 15}
/*<359>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 367, 'param3': 17}
/*<367>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5390, 'param2': 3840, 'next': 363, 'param3': 13}
/*<363>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 368, 'param3': 48}
/*<368>*/ 	{'type': 'type3', 'subType': 2, 'param1': 49, 'param2': 100, 'next': 358, 'param3': 14}
/*<358>*/ 	entrypoint_118_25();
          }

          void entrypoint_118_27() {
/*<427>*/ 	start()
/*<439>*/ 	switch (zone_temp_flags[7 /* 0x1 80 */]) {
          	  case 0:
/*<442>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<441>*/ 			printf("\x0E\x01\x09\x04\x07\xC08Heb je het gehoord over het eiland van de\ngodin? Ik vraag me af wat er gebeurd is.\nHet is te gek voor woorden...\n\nGeen spoor van Zelda. Ganderd is weg...\nWat is er toch aan de hand?!")
/*<443>*/ 			scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          		  case 1:
/*<444>*/ 			printf("\x0E\x01\x09\x04\x00\x05Wacht maar af! Ik train net zo lang tot ik\nnet zo sterk ben als jij!")
          		}
          	  case 1:
/*<437>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<438>*/ 			printf("\x0E\x01\x09\x04\x07\xA0BHoi, Link! Hoe gaat het?\nDankzij dat <y<energiedrankje>> van je voel ik\nme fantastisch!\n\n\x0E\x01\x09\x04ÿ\xFF00Maar zo sterk als jij zal ik nooit worden.\nIk ben ook maar tenger, natuurlijk...\n\n\nAls je zin hebt, kun je me 's nachts nog\nwel eens komen bezoeken!")
          			flw_440:
/*<440>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<435>*/ 			switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          			  case 0:
/*<436>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hoi, Link! Hoe verloopt de\nzoektocht naar Zelda?\n\n\nIk heb het vast al eens eerder gezegd,\nmaar ik denk dat ik mijn top heb bereikt.\nHet voelt alsof ik m'n tijd hier verdoe...\n\nMaar ja, ik blijf hier elke <r<nacht>> trainen,\ndus kom gerust eens langs om me tips te\ngeven.")
          				goto flw_440
          			  case 1:
/*<431>*/ 				switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
          				  case 0:
/*<434>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ha, Link! Sinds je me dat\n<y<energiedrankje >>hebt gegeven, verlopen\nmijn trainingen <y<'s nachts >>een stuk beter.\n\n\x0E\x01\x09\x04\x10\x1B00Maar toch... Het voelt alsof ik mijn top\nheb bereikt. Misschien verdoe ik mijn tijd\nhier.\n\nIk weet niet of ik ooit zo sterk als jij zal\nworden, Link...\n\n\n\x0E\x01\x09\x04ÿ\xFF00Maar van zelfmedelijden is nog nooit\niemand sterker geworden, dus ik blijf\nelke <r<nacht>> trainen! Kom gauw weer eens\nlangs om me wat tips te geven.")
          					goto flw_440
          				  case 1:
/*<430>*/ 					switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          					  case 0:
/*<433>*/ 						printf("\x0E\x01\x09\x04\x07\xA0BAh, hallo, Link! Nogmaals\nbedankt voor dat <y<energiedrankje>>! Dankzij\njou kan ik nu veel vaker opdrukken dan\nvoorheen!\n\x0E\x01\x09\x04ÿ\xFF00Wacht maar af! Binnen de kortste keren\nben ik net zo'n spierbundel als jij!")
          						goto flw_440
          					  case 1:
/*<432>*/ 						printf("\x0E\x01\x09\x04\x00\x01Oei, wat gênant, zeg... Nu heb je me dan\ntoch 's nachts zien trainen.\n\n\nIk wil net zo sterk worden als jij, maar\necht veel voortgang lijk ik niet te maken.\nMaar ik blijf er hard voor werken!")
          						goto flw_440
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_10() {
/*< 25>*/ 	start()
/*<428>*/ 	switch (story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */]) {
          	  case 0:
/*<445>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 429, 'param3': 31}
/*<429>*/ 		entrypoint_118_27();
          	  case 1:
/*< 40>*/ 		switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          		  case 0:
/*< 69>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*< 70>*/ 				switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          				  case 0:
/*<306>*/ 					switch (zone_temp_flags[7 /* 0x1 80 */]) {
          					  case 0:
/*<418>*/ 						switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
          						  case 0:
/*<419>*/ 							printf("\x0E\x01\x09\x04\x00\x05Wacht maar af! Ik train net zo lang tot ik\nnet zo sterk ben als jij!")
          							flw_332:
/*<332>*/ 							switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          							  case 0:
/*<331>*/ 								printf("\x0E\x01\x09\x04\x07\xC08Heb je het gehoord over het eiland van de\ngodin? Ik vraag me af wat er gebeurd is.\nHet is te gek voor woorden...\n\nGeen spoor van Zelda. Ganderd is weg...\nWat is er toch aan de hand?!")
/*<339>*/ 								scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          							  case 1:
          							}
          						  case 1:
/*<307>*/ 							printf("\x0E\x01\x09\x04\x00\x01Ik weet zeker dat je Zelda ook zult\nvinden!")
          							goto flw_332
          						}
          					  case 1:
/*<312>*/ 						switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          						  case 0:
/*<498>*/ 							entrypoint_118_29();
          						  case 1:
/*<313>*/ 							printf("\x0E\x01\x09\x04\x00\x12Hoi, Link! Ik heb nog steeds\ngeen spoor van Sijsje kunnen vinden.\n\n\n\x0E\x01\x09\x04\x00\xE10Ben je eigenlijk wel naar haar op zoek?\n\n\n\n\x0E\x01\x09\x04\x00\xC00Wat zei je? Ze is in veiligheid?!\n\n\n\n\x0E\x01\x09\x04\x07\xA0BWat een opluchting! Echt geweldig dat je\nhaar hebt gevonden, Link! Ik\nwist dat ik op je kon rekenen.")
/*<329>*/ 							story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
/*<497>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				  case 1:
/*<308>*/ 					switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          					  case 0:
/*<310>*/ 						printf("\x0E\x01\x09\x04\x00\nLaat het Sijsjes moeder even weten, wil\nje? Ik vermoed dat ze bij hun huis aan de\nwaterkant is.")
          					  case 1:
/*<309>*/ 						printf("\x0E\x01\x09\x04\x00\x12Hoi, Link! Ik heb nog steeds\ngeen spoor van Sijsje kunnen vinden.\n\n\n\x0E\x01\x09\x04\x00\xE10Ben je eigenlijk wel naar haar op zoek?\n\n\n\n\x0E\x01\x09\x04\x00\xC00Wat zei je? Ze is in veiligheid?!\n\n\n\n\x0E\x01\x09\x04\x07\xA0BWat een opluchting! Echt geweldig dat je\nhaar hebt gevonden, Link! Ik\nwist dat ik op je kon rekenen.")
/*<311>*/ 						story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
          					}
          				}
          			  case 1:
/*<328>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<327>*/ 					printf("\x0E\x01\x09\x04\x07\x801O, Link! Ik kan het haast niet\ngeloven... Het eiland van de godin is\nverdwenen! Wat een ramp!\n\n\x0E\x01\x09\x04\x00\x800Die schattige, kleine Sijsje is vermist...\n\n\n\n\x0E\x01\x09\x04\x00\xE00Er is geen spoor van Zelda te bekennen.\nGanderd is weg... Wat is er toch aan de\nhand?!\n\n\x0E\x01\x09\x04\x07\x800Ik ga helpen zoeken en ik hoop dat jij dat\nook doet, Link!")
/*<338>*/ 					scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          				  case 1:
/*<304>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<305>*/ 						printf("\x0E\x01\x09\x04\x00\x12Ik heb Sijsje nog steeds niet gevonden,\nLink!\n\n\n\x0E\x01\x09\x04\x00\xE10Ben je eigenlijk wel aan het zoeken? Je\nstelt het toch niet uit, hoop ik? Dit is een\nserieuze zaak!\n\n\x0E\x01\x09\x04\x07\x200Ik doe m'n best haar te vinden, maar ik\nkan het niet alleen. Ik reken op je!")
          					  case 1:
/*<301>*/ 						switch (zone_temp_flags[7 /* 0x1 80 */]) {
          						  case 0:
/*<303>*/ 							printf("\x0E\x01\x09\x04\x00\x1701Misschien kun jij op het grote plein\nzoeken, Link! Ik probeer het\nergens anders.\n\n\x0E\x01\x09\x04\x08\x1700Ik vraag me af of de knul met wie ze\ngisteren speelde, nog in de buurt is...")
          						  case 1:
/*< 26>*/ 							printf("\x0E\x01\x09\x04\x00\x01O, Link! Hoe gaat het? Heb je\nZelda al gevonden?\n\n\nO<pause0A>.<pause0A>.<pause0A>. Oké. Dan moet je nog even goed je\nbest doen!\n\n\n\x0E\x01\x09\x04\x07\x200Trouwens, ik zag de moeder van Sijsje\neen tijdje terug naar de tempel lopen.\nZe zag er behoorlijk overstuur uit.\n\n\x0E\x01\x09\x04\x08\x1700Zou er iets gebeurd zijn?")
/*< 30>*/ 							printf("\x0E\x01\x09\x04 \x508Wat? Is Sijsje vermist?!\n\n\n\n\x0E\x01\x09\x04\x07\x800We moeten iets doen! Ik help ook met\nzoeken! Ga jij eens rondvragen of iemand\nhaar gezien heeft, Link!")
/*<302>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				}
          			}
          		  case 1:
/*<326>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<325>*/ 				printf("\x0E\x01\x09\x04\x07\x801O, Link! Ik kan het haast niet\ngeloven... Het eiland van de godin is\nverdwenen! Wat een ramp!\n\n\x0E\x01\x09\x04\x00\x800Die schattige, kleine Sijsje is vermist...\n\n\n\n\x0E\x01\x09\x04\x00\xE00Er is geen spoor van Zelda te bekennen.\nGanderd is weg... Wat is er toch aan de\nhand?!\n\n\x0E\x01\x09\x04\x07\x800Ik ga helpen zoeken en ik hoop dat jij dat\nook doet, Link!")
/*<337>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
/*< 41>*/ 				printf("\x0E\x01\x09\x04\x00\x01O, Link! Hoe gaat het? Heb je\nZelda al gevonden?\n\n\nO<pause0A>.<pause0A>.<pause0A>. Oké. Dan moet je nog even goed je\nbest doen!\n\n\nTrouwens, ik zag de moeder van Sijsje\neen tijdje terug naar de tempel lopen.\nZe zag er behoorlijk overstuur uit.\n\n[1]Ehm, wie?[2]Ik weet het.")
/*< 42>*/ 				switch (choice(2)) {
          				  case 0:
/*< 43>*/ 					printf("\x0E\x01\x09\x04\x00\x05Ze woont in dat huis aan het water met\nhaar man en hun kleine meid.\n\n\n\x0E\x01\x09\x04\x07\x800Ik weet niet precies wat er aan de hand\nwas, maar ze zag er erg verdrietig uit.")
          				  case 1:
/*< 44>*/ 					printf("\x0E\x01\x09\x04\x07\x806Ach, hou me niet voor de gek!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_28() {
/*<450>*/ 	start()
/*<464>*/ 	switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          	  case 0:
          		flw_460:
/*<460>*/ 		switch (random(2)) {
          		  case 0:
/*<459>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hoi, Link! Ik heb Ganderd al\neen tijdje niet gezien. Misschien is hij wel\ngeschorst van de ridderacademie...")
          		  case 1:
/*<461>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hoi, Link! Struiz heeft me een\npaar geweldige tips gegeven om <r<insecten\nte vangen>>!\n\nHij zei dat makkelijker is wanneer je\neen zijwaartse beweging met het net\nmaakt in plaats van over je hoofd!\n\nEn je moet de insecten heeeel stilletjes\nbenaderen en dan vliegensvlug met het\nnet zwaaien!")
          		}
          	  case 1:
/*<462>*/ 		switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          		  case 0:
/*<463>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ha, Link!\n\n\n\nHmm? <b<Taaivors>>\x0E\x01\x06\x02\xFBCD?\x0E\x01\x06\x02Í <pause14>Is dat een soort kikker?\nJe bent af en toe echt niet te volgen...")
          		  case 1:
/*<458>*/ 			switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          			  case 0:
          				goto flw_460
          			  case 1:
/*<448>*/ 				switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          				  case 0:
/*<449>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ha, Link! Kijk eens naar de\nlichttoren!\n\n\nEr komt een lichtstraal uit! Hoe gaaf is\ndat?!")
          				  case 1:
/*<457>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
          						flw_454:
/*<454>*/ 						printf("\x0E\x01\x09\x04\x00\x01Hoi, Link! Klopt het dat je met\neen <r<net>> meer kunt vangen dan alleen\ninsecten?\n\nRogyr van de werkplaats heeft me dat\nnamelijk verteld.")
          					  case 1:
/*<455>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<456>*/ 							printf("\x0E\x01\x09\x04\x00\x01Yo, Link!\n\n\n\nHè? De <r<tekst >>van een lied dat Zelda zong?\n\n\n\nIk dacht altijd dat ze alleen iets zong als\n\"la, la, la\"...")
          						  case 1:
/*<453>*/ 							switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          							  case 0:
          								goto flw_454
          							  case 1:
/*<452>*/ 								printf("\x0E\x01\x09\x04\x00\x01Ik moet een manier zien te vinden om\nBeedles wolkenwinkel te bereiken. Anders\nkom ik nooit aan een net!\n\nDan breng ik daarna direct een bezoekje\naan Rogyr in zijn werkplaats. Hij kan\nmijn net dan nog groter maken!")
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_11() {
/*< 53>*/ 	start()
/*<162>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 54>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hij is geen slecht iemand! Hij heeft me\nooit gered toen ik bijna over de rand\nkukelde! En van hem mag ik hier zo hard\nschreeuwen als ik wil.\nVolgens hem is het gevaarlijk om er\n's nachts alleen op uit te trekken, dus blijf\nik hier tot het licht wordt en ga dan naar\nhuis. Kun je dat tegen mama zeggen?")
          	  case 1:
/*<163>*/ 		printf("\x0E\x01\x09\x04\x00\x06Wat is er aan de hand? Waarom kijk je zo\nangstig? Is er iets gebeurd?")
          	}
          }

          void entrypoint_118_29() {
/*<496>*/ 	start()
/*<413>*/ 	switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          	  case 0:
/*<412>*/ 		switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
          		  case 0:
/*<417>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ik ben elke nacht hard aan het trainen,\nzodat ik op een dag net zo sterk ben als\njij. Het ziet er bij jou alleen een stuk\nmakkelijker uit, Link.\nJe hebt de lat erg hoog gelegd!")
          			flw_330:
/*<330>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<414>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 415, 'param3': 31}
/*<415>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hoi, Link. Heb je al enig spoor\nvan Zelda weten te vinden?\n\n\nNiet aan de grote klok hangen, hoor, maar\nik train sinds kort <r<'s nachts >>zodat ik net\nzo sterk word als jij.\n\nO<pause05>.<pause05>.<pause05>.<pause0A> Nee, nee, nee!\x0E\x01\x09\x04\x00\xA06 Kom 's nachts niet\nnaar <r<m'n kamer>> als ik aan het trainen\nben. Ik zou me kapot schamen!")
/*<416>*/ 			story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */] = true;
          			goto flw_330
          		}
          	  case 1:
/*<501>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
          			flw_505:
/*<505>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hoi, Link! Heb je al een spoor\nvan Zelda gevonden? Ik hoop dat ze snel\nweer hier is.")
          			goto flw_330
          		  case 1:
/*<500>*/ 			switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          			  case 0:
/*<504>*/ 				printf("\x0E\x01\x09\x04\x00\x811\x0E\x03\x01\x00Link, dit is geweldig! Er komt\neen lichtstraal uit de lichttoren! Zoiets\nheb ik nog nooit van m'n leven gezien!")
          			  case 1:
/*<507>*/ 				switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          				  case 0:
          					goto flw_505
          				  case 1:
/*<494>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
/*<503>*/ 						printf("\x0E\x01\x09\x04\x07\xA0BHoi, Link!\n\n\n\n\x0E\x01\x09\x04\x00\xFF05\"<r<Twee wapperende zeilen>>\", zei je? Da's een\nlastige. Er staat hier altijd een sterke\nwind, dus er zijn een hoop dingen die op\nzeilen lijken.")
          					  case 1:
/*<495>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<502>*/ 							printf("\x0E\x01\x09\x04\x07\xA0BHallo, Link!\n\n\n\n\x0E\x01\x09\x04\x00\xFF08Hm? De <r<Ballade van de Godin>>?<pause1E> Ja, die\nken ik wel. Zelda zong dat lied altijd.\n\n\nIk ken de tekst helaas niet, maar ik durf\nte wedden dat de rector van de academie\nhem wel kent.")
          						  case 1:
/*<314>*/ 							printf("\x0E\x01\x09\x04\x00\x0BO, hoi, Link! Sijsjes moeder\nwas vast blij dat je haar hebt gevonden!\nWat een opluchting!")
/*<499>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_12() {
/*< 67>*/ 	start()
/*<473>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<474>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hallo, Link! <pause1E>Huh? Ome Vleer\nis nu een mens?\n\n\nWat jammer, zeg\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Ik vond zijn flapper-\nvleugels juist zo leuk...")
          	  case 1:
/*< 68>*/ 		printf("\x0E\x01\x09\x04\x00\x01O, jij bent het, Link!\n\n\n\nOme Vleer zei dat hij zoveel dankdingen\nwil verzamelen als hij kan! Hoe gaat hij\ndat voor elkaar krijgen?")
          	}
          }

          void entrypoint_118_99() {
/*<506>*/ 	start()
/*<293>*/ 	switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          	  case 0:
          	  case 1:
/*<247>*/ 		{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 244, 'param3': 51}
/*<244>*/ 		printf("")
/*<245>*/ 		switch (choice(2)) {
          		  case 0:
/*<248>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<249>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<250>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<251>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<252>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<253>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<378>*/ 			open_dowsing_wheel(13)
/*<380>*/ 			printf("")
/*<379>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          			flw_254:
/*<254>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          		  case 1:
/*<246>*/ 			printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester. Ik zal uw zwaard niet\nopnieuw kalibreren, dus u zult dit\nvoorwerp niet kunnen <pling>detecteren.")
          			goto flw_254
          		}
          	}
          }

          void entrypoint_118_13() {
/*< 71>*/ 	start()
/*< 84>*/ 	switch (story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */]) {
          	  case 0:
/*< 85>*/ 		printf("\x0E\x01\x09\x04\x00\x13Wauw! Is dat niet... die oude robot van\nRogyrs werkplaats?!")
/*<189>*/ 		make_actor_do_something(1, 0)
/*< 87>*/ 		printf("Wacht eens eventjes...\n\n\n\n<pause14>Is dat...<pause28> Ja! Het is de <r<propeller van de\nwindmolen>>! Ik dacht dat dat ding door de\nwolken was gevallen!\n\n\x0E\x01\x09\x04\x0C\xC00Je gaat me toch niet vertellen dat al die\nprietpraat van Rogyrs familie waar is?\n\n\nHm... Ik heb het gevoel dat dit een uit de\nhand gelopen grap is, maar ik ga toch\nproberen dit ding weer aan de praat te\nkrijgen...")
/*<182>*/ 		set_camera(6, 0)
/*< 88>*/ 		printf("Dit moet hierzo... En dat daar... Dit nog\neven aandraaien...")
/*<183>*/ 		{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 256, 'next': 184, 'param3': 15}
/*<184>*/ 		{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 209, 'param3': 15}
/*<209>*/ 		story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */] = true;
/*<186>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 190, 'param3': 6}
/*<190>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 256, 'next': 185, 'param3': 13}
/*<185>*/ 		set_camera(7, 0)
/*<194>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 89, 'param3': 6}
/*< 89>*/ 		printf("\x0E\x01\x09\x04\n\x10EPfff!")
/*<188>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 187, 'param3': 17}
/*<187>*/ 		printf("\x0E\x01\x09\x04\x0C\xC00Dat zou het moeten doen! Als je een\nmanier vindt om de propeller te laten\ndraaien, kun je de windmolen weer aan\nde praat krijgen.")
/*<210>*/ 		printf("\x0E\x01\x09\x04\x00\x100\x0E\x01\x08\x02\xFFCDLieveeeerd! Lieveeeerd?")
/*<297>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 90>*/ 			printf("\x0E\x01\x09\x04\x05\x714O, nee! Ik geloof dat ik mijn vrouw heb\nbeloofd dat ik een kast zou repareren! Ze\nweet echt altijd nieuwe klusjes voor me te\nverzinnen.")
/*< 91>*/ 			printf("\x0E\x01\x09\x04\x0C\xC00Tot later, Link!")
          			flw_192:
/*<192>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 191, 'param3': 17}
/*<191>*/ 			{'type': 'type3', 'subType': 2, 'param1': 31, 'param2': 0, 'next': 193, 'param3': 14}
/*<193>*/ 			story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */] = true;
/*<294>*/ 			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<211>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<295>*/ 			printf("\x0E\x01\x09\x04\x05\x714Oei! Ik moet dringend op zoek naar\nSijsje!")
/*<296>*/ 			printf("\x0E\x01\x09\x04\x0C\xC00Tot later, Link! Laat het me\nweten als je Sijsje vindt, oké?")
          			goto flw_192
          		}
          	  case 1:
/*< 73>*/ 		switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          		  case 0:
/*<243>*/ 			printf("\x0E\x01\x09\x04\x00\x05Dingen omhoog takelen uit een of ander\nfantastisch fabelland onder de wolken dat\nniet eens bestaat? Dat klinkt als een hoop\ngebakken lucht.\n<b<Rogyr>> gelooft echter elk woord van dat\nverhaal. Daarom sleutelt hij de hele tijd\naan die oude robot.")
          		  case 1:
/*<291>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<205>*/ 				printf("\x0E\x01\x09\x04\x00\x01Bedankt voor het vinden van Sijsje,\nLink! En wat is het vandaag\neen prachtige dag.\n\nOp een dag als vandaag zou ik niets liever\nwillen dan naar De Oranje Poen te gaan\nvoor een heerlijke kom soep.\n\nMaar ja, ik moet van mijn vrouw zo nodig\neen kast repareren, dus dat zit er voor\nmij niet in.\n\nZo gaat het nou altijd bij mij...")
          			  case 1:
/*<292>*/ 				printf("\x0E\x01\x09\x04\x00\x0EHa, Link. Ik heb nog steeds\ngeen spoor van Sijsje gevonden! Zelfs ik\nbegin me enigszins zorgen te maken...\n\nKun je helpen naar haar te zoeken?")
          			}
          		}
          	}
          }

          void entrypoint_118_14() {
/*< 80>*/ 	start()
/*< 82>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 83>*/ 		printf("Wat bent u toch geweldig! Voor u,\nmeesteres Fi, doe ik alles, bzzrt!")
          	  case 1:
/*< 81>*/ 		printf(".<pause05>.<pause05>.")
          	}
          }

          void entrypoint_118_15() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("Aan de andere kant van de deur is een\nkwaadaardige aura te bespeuren.")
          }

          void entrypoint_118_16() {
/*< 95>*/ 	start()
/*<102>*/ 	switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
          	  case 0:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x01\x701Kom me gauw weer eens bezoeken\nin de bazaar als je de kans hebt!\n\n\nDan vertel ik je je toekomst voor een\nvriendenprijsje!")
          	  case 1:
/*<101>*/ 		switch (story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */]) {
          		  case 0:
/*<104>*/ 			printf("\x0E\x01\x09\x04\x10\x70DOooo!\n\n\n\nI-Ik kan mijn ogen niet geloven! Deze\nkristallen bol lijkt precies op mijn oude\nbol!")
/*<256>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 105, 'param3': 17}
/*<105>*/ 			printf("\x0E\x01\x09\x04\x00\x700Mmmm! Ik leef weer helemaal op,\njongeman! En ik kan eindelijk weer in de\ntoekomst kijken!\n\nKom me gauw weer eens bezoeken in de\nbazaar als je de kans hebt! Dan vertel ik\nje je toekomst voor een vriendenprijsje!")
/*<106>*/ 			story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */] = true;
/*<298>*/ 			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<376>*/ 			scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*<377>*/ 			scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
/*<141>*/ 			give_gratitude_crystals();
          		  case 1:
/*< 99>*/ 			switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          			  case 0:
/*<425>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 212, 'param3': 31}
/*<212>*/ 				switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
          				  case 0:
/*<161>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1799, 'next': 103, 'param3': 13}
/*<103>*/ 					printf("Hm? Wat doe je hier?! Zou jij niet een\nkristallen bol voor me vinden?")
          				  case 1:
/*<214>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1799, 'next': 213, 'param3': 13}
/*<213>*/ 					printf("Hm? Wat doe je hier?! Zou jij niet een\nkristallen bol voor me vinden?")
/*<242>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 215, 'param3': 51}
/*<215>*/ 					printf("Uw <r<<pling>detectievaardigheid>> is momenteel niet\ngekalibreerd om de <r<kristallen bol >>te\nvinden waar deze persoon naar op zoek is.\n\n<pling>Wilt u uw <r<detectievaardigheid>> kalibreren\nom op zoek te gaan naar de <r<kristallen\nbol>>?\n[1]Ja, graag.[2-]Niet nu.")
/*<216>*/ 					switch (choice(2)) {
          					  case 0:
/*<382>*/ 						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
/*<221>*/ 						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<220>*/ 						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<218>*/ 						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<219>*/ 						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<222>*/ 						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<384>*/ 						open_dowsing_wheel(14)
/*<383>*/ 						printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester.\n\n\n\nUw <pling><r<detectievaardigheid >>is nu ingesteld om\nde <r<kristallen bol>> te detecteren waar deze\npersoon naar zoekt")
          						flw_241:
/*<241>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          					  case 1:
/*<217>*/ 						printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester. Ik zal uw zwaard niet\nopnieuw kalibreren, dus u zult dit\nvoorwerp niet kunnen <pling>detecteren.")
          						goto flw_241
          					}
          				}
          			  case 1:
/*<100>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 31}
/*<122>*/ 				printf("\x0E\x01\x09\x04\x0C\x100FAch, laat het maar zitten... Maak je om\nmij geen zorgen...\n\n\nMijn kristallen bol is kapot en ik kan niet\nin je toekomst kijken, jongeman...\n\n\nDeze \x0E\x01\x06\x02\xFCCDsprankelende ogen \x0E\x01\x06\x02Íworden net zo\ndof en levenloos als mijn kristallen bol.\n\n\n<pause1E>O, had ik maar een nieuwe kristallen bol...")
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1798, 'next': 159, 'param3': 13}
/*<159>*/ 				printf("Ah, er schiet me net iets binnen! Jij bent\ntoch die knul die onlangs de propeller van\nde windmolen uit de wereld onder de\nwolken heeft teruggehaald?\nDeze gebroken kristallen bol heb ik ooit\nvan de vorige eigenaar van de werkplaats\ngekregen.\n\nIk vraag me af of er daar onder de\nwolken misschien ook een kristallen bol te\nvinden is. Zou jij dat eens voor mij willen\nuitzoeken, knul?[1]Prima![2-]Nee.")
/*< 96>*/ 				switch (choice(2)) {
          				  case 0:
/*<255>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1802, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf("Bedankt, knul! Dat is zo aardig van je!\nIk reken op je!\n\n\nDe voormalige eigenaar van de werkplaats\nschijnt van zijn robot te hebben gehoord\ndat de kristallen bol afkomstig was van\n<r<een gebouw op de top van een berg>>!")
/*<123>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 124, 'param3': 51}
/*<124>*/ 					printf("Uw <pling><r<detectievaardigheid>> kan worden\ngekalibreerd om de kristallen bol te\nvinden waar deze persoon naar op zoek is.\n\nAls u naar een ander object wilt zoeken,\nkunt u het huidige doelwit wissen en een\nnieuw object selecteren.\n\nWilt u <r<de kristallen bol >>instellen als\ndoelwit om te detecteren?\n[1]Ja![2-]Nog niet.")
/*<465>*/ 					switch (choice(2)) {
          					  case 0:
/*<466>*/ 						printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester. Ik stel het doelwit om\nte detecteren in op de kristallen bol.")
/*<381>*/ 						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
/*<388>*/ 						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<387>*/ 						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<385>*/ 						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<386>*/ 						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<389>*/ 						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<394>*/ 						open_dowsing_wheel(14)
          						flw_391:
/*<391>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 390, 'param3': 36}
/*<390>*/ 						story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */] = true;
/*<393>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 392, 'param3': 16}
/*<392>*/ 						printf("\x0E\x01\x09\x04\x01\x70BIk reken op je, jongeman! Met een kapotte\nkristallen bol kan ik onmogelijk in de\ntoekomst kijken, dus kan ik ook niet zien\nwat de sterren voor je in petto hebben!\nIk wacht dus met smart op een nieuwe\nkristallen bol!")
          					  case 1:
/*<467>*/ 						printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester. Als u later toch dit\nobject wilt detecteren, moet u weer met\ndeze persoon praten.")
          						goto flw_391
          					}
          				  case 1:
/*< 98>*/ 					printf("Ach\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x0C\x1009 Het lot is oneerlijk\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í")
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_17() {
/*<109>*/ 	start()
/*<114>*/ 	switch (story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */]) {
          	  case 0:
/*<478>*/ 		switch (zone_temp_flags[14 /* 0x0 40 */]) {
          		  case 0:
/*<479>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<481>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 480, 'param3': 13}
/*<480>*/ 				printf("Dat het eiland van de godin zomaar kan\nverdwijnen... Ik kan mijn eigen ogen\ngewoon niet geloven!\n\nHoe erg dit ook lijkt, ik heb van de rector\ngehoord dat Zelda nu gered kan worden.\nAlsjeblieft, help haar! Jij bent onze enige\nhoop!")
          			  case 1:
          				flw_173:
/*<173>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 509, 'param3': 32}
/*<509>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 322, 'param3': 13}
/*<322>*/ 				printf("Hoi, Link! De wereld zit vol\nverrassingen, nietwaar? Ik vraag me af\nhoeveel planten er nog zijn die nog nooit\nontdekt zijn.")
/*<174>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 121, 'param3': 17}
/*<121>*/ 				printf("\x0E\x01\x09\x04\x0E\x50AHoe meer ik naar deze plant kijk,\nhoe interessanter ik 'm vind!\n\n\n\x0E\x01\x09\x04\x00\x500Of is dit organisme een dier en geen\nplant? Het is werkelijk ongelofelijk\ninteressant!")
/*<477>*/ 				zone_temp_flags[14 /* 0x0 40 */] = true;
          			}
          		  case 1:
          			goto flw_173
          		}
          	  case 1:
/*<113>*/ 		switch (story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */]) {
          		  case 0:
/*<158>*/ 			entrypoint_118_21();
          		  case 1:
/*<112>*/ 			switch (story_flags[479 /* us: 805A9B11 0x08, jp: 805ACD91 0x08 */]) {
          			  case 0:
/*<426>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 274, 'param3': 31}
/*<274>*/ 				switch (zone_temp_flags[14 /* 0x0 40 */]) {
          				  case 0:
/*<275>*/ 					printf("\x0E\x01\x09\x04\x00\x09Hahaha! Ik wist wel dat je me niet teleur\nzou stellen, Link. Bedankt!")
          					flw_229:
/*<229>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
          					  case 1:
/*<267>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 268, 'param3': 32}
/*<268>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 269, 'param3': 17}
/*<269>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 230, 'param3': 6}
/*<230>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 270, 'param3': 51}
/*<270>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 231, 'param3': 50}
/*<231>*/ 						printf("Uw <r<<pling>detectievaardigheid >>is momenteel niet\ngekalibreerd om de <r<plant >>te vinden waar\ndeze persoon naar op zoek is.\n\n<pling>Wilt u uw <r<detectievaardigheid >>kalibreren\nom op zoek te gaan naar de <r<plant>>?\n[1]Zeker.[2-]Nu niet.")
/*<232>*/ 						switch (choice(2)) {
          						  case 0:
/*<234>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
/*<235>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<236>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<237>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<238>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<239>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<396>*/ 							open_dowsing_wheel(16)
/*<395>*/ 							printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester.\n\n\n\nUw <pling><r<detectievaardigheid >>is nu ingesteld om\nde <r<plant>> te detecteren waar deze persoon\nnaar zoekt")
          							flw_240:
/*<240>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          						  case 1:
/*<233>*/ 							printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester. Ik zal uw zwaard niet\nopnieuw kalibreren, dus u zult dit\nvoorwerp niet kunnen <pling>detecteren.")
          							goto flw_240
          						}
          					}
          				  case 1:
/*<120>*/ 					printf("\x0E\x01\x09\x04\x00\x01En? Hoe verloopt je zoektocht naar\nnog niet ontdekte, exotische planten?")
          					goto flw_229
          				}
          			  case 1:
/*<111>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<318>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<508>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 321, 'param3': 31}
/*<321>*/ 						printf("\x0E\x01\x09\x04\x00\x01Ha, Link! Heb je toch besloten\nom me te helpen?\n\n\nHet verzamelen van exotische planten is\nmijn passie!")
          						flw_118:
/*<118>*/ 						printf("\x0E\x01\x09\x04\x00\x00Het is alleen... Ik heb alle planten\nverzameld die hier te vinden zijn en ik\nzou zo graag een nieuwe soort ontdekken.\n\n\x0E\x01\x09\x04\x09\xA0FWat dacht je ervan? Zou je voor mij op\nzoek willen gaan naar een nieuwe planten-\nsoort?\n[1]Tuurlijk![2-]Ik heb het te druk!")
/*<132>*/ 						switch (choice(2)) {
          						  case 0:
/*<133>*/ 							printf("\x0E\x01\x09\x04\n\xA03Ha! Ik wist dat je me niet in de steek zou\nlaten, Link.\n\n\nKun je voor mij een zeldzame, nieuwe\nplantensoort vinden? Een soort\ndie niemand hier ooit gezien heeft.")
/*<265>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 266, 'param3': 32}
/*<266>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 271, 'param3': 17}
/*<271>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 134, 'param3': 6}
/*<134>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 272, 'param3': 51}
/*<272>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 135, 'param3': 50}
/*<135>*/ 							printf("Uw <pling><r<detectievaardigheid>> kan worden\ngekalibreerd om de <r<plant >>te vinden waar\ndeze persoon naar op zoek is.\n\nAls u echter al naar een ander object op\nzoek bent voor iemand, dan zult u dat\nobject niet meer kunnen detecteren nadat\nu het zwaard opnieuw instelt.\nWilt u deze <r<plant>> instellen als uw huidige\ndoelwit?\n[1]Ja![2-]Niet nu.")
/*<468>*/ 							switch (choice(2)) {
          							  case 0:
/*<469>*/ 								printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester. Ik stel de plant in als\nhet huidige doelwit.")
/*<223>*/ 								story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
/*<224>*/ 								story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<225>*/ 								story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<226>*/ 								story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<227>*/ 								story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<228>*/ 								story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<397>*/ 								open_dowsing_wheel(16)
          								flw_136:
/*<136>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 119, 'param3': 36}
/*<119>*/ 								story_flags[479 /* us: 805A9B11 0x08, jp: 805ACD91 0x08 */] = true;
/*<273>*/ 								zone_temp_flags[14 /* 0x0 40 */] = true;
          							  case 1:
/*<470>*/ 								printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester. Als u later toch dit\nobject wilt detecteren, moet u weer met\ndeze persoon praten.")
          								goto flw_136
          							}
          						  case 1:
/*<117>*/ 							printf("\x0E\x01\x09\x04\n\xA09Hahaha! Je hebt vast genoeg dingen te\ndoen, nietwaar? Het kan geen kwaad je\nvan tijd tot tijd op andere dingen te\nconcentreren!\nIedereen heeft rust nodig. Vergeet dat\nniet!")
          						}
          					  case 1:
/*<320>*/ 						story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
/*<115>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 484, 'param3': 31}
/*<484>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<483>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 482, 'param3': 13}
/*<482>*/ 							printf("Dat het eiland van de godin zomaar kan\nverdwijnen... Ik kan mijn eigen ogen\ngewoon niet geloven!\n\nHoe erg dit ook lijkt, ik heb van de rector\ngehoord dat Zelda nu gered kan worden.\nAlsjeblieft, help haar! Jij bent onze enige\nhoop!")
          							flw_116:
/*<116>*/ 							printf("\x0E\x01\x09\x04\x00\x13Ehm... Trouwens... Zou je iets voor me\nwillen doen?\n\n\nJe weet dit waarschijnlijk al, maar ik ben\nde meest vooraanstaande planten-\nverzamelaar op heel Skyloft. Dat vind ík\nin ieder geval.")
          							goto flw_118
          						  case 1:
/*<319>*/ 							printf("\x0E\x01\x09\x04\x00\x01Hallo, Link! Heb je met Levias\ngesproken?\n\n\nMooi! Ik zie dat ik gelijk had. Jij hebt iets\nbijzonders. En ik denk geen avontuur te\ngroot is voor jou en die rooie Loftwing\nvan jou!\nEr staan je echter nog vele gevaren te\nwachten, dus hou de moed erin!")
          							goto flw_116
          						}
          					}
          				  case 1:
/*<315>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<110>*/ 						printf("\x0E\x01\x09\x04\x00\x01\x0E\x03\x01\x00Link! Ik moet iets aan je kwijt.\nHeb je even?\n[1]Vertel op.[2-]Nee, sorry!")
/*<129>*/ 						switch (choice(2)) {
          						  case 0:
/*<131>*/ 							printf("Ach, weet je wat? Zo dringend is het nu\nook weer niet! Het is belangrijker dat we\nSijsje zo snel mogelijk vinden.\n\nMocht je tijd hebben om mee te zoeken,\ndan wordt dat vast enorm op prijs\ngesteld...")
          						  case 1:
/*<130>*/ 							printf("\x0E\x01\x09\x04\x00\x09Pfff! Is het te veel gevraagd om even\naan te horen waar ik mee zit?")
          						}
          					  case 1:
/*<487>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<486>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 485, 'param3': 13}
/*<485>*/ 							printf("Dat het eiland van de godin zomaar kan\nverdwijnen... Ik kan mijn eigen ogen\ngewoon niet geloven!\n\nHoe erg dit ook lijkt, ik heb van de rector\ngehoord dat Zelda nu gered kan worden.\nAlsjeblieft, help haar! Jij bent onze enige\nhoop!")
          						  case 1:
/*<316>*/ 							printf("\x0E\x01\x09\x04\x00\x01Hallo, Link! Heb je met Levias\ngesproken?\n\n\nMooi! Ik zie dat ik gelijk had. Jij hebt iets\nbijzonders. En ik denk geen avontuur te\ngroot is voor jou en die rooie Loftwing\nvan jou!\nEr staan je echter nog vele gevaren te\nwachten, dus hou de moed erin!")
/*<317>*/ 							story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_18() {
/*<137>*/ 	start()
/*<164>*/ 	printf("Hier is die <r<windmolenpropeller>>.\nDzzt!")
/*<108>*/ 	make_actor_do_something(0, 0)
/*< 86>*/ 	printf("Laat het me maar weten als ik weer van\ndienst kan zijn! Dzzt!\n\n\nVoor meesteres Fi reis ik overal naartoe,\ndzzt!")
          }

          void entrypoint_118_19() {
/*<138>*/ 	start()
/*<139>*/ 	printf("\x0E\x01\x09\x04\x09\x11Kieee-palieeep! Je maakt me verlegen\nals je zo naar me kijkt!")
          }

          void entrypoint_118_20() {
/*<140>*/ 	start()
/*<125>*/ 	printf("Hier is die prachtige, glimmende\nkristallen bol. Dzzt!")
/*<127>*/ 	make_actor_do_something(0, 0)
/*<126>*/ 	printf("Laat het me maar weten als ik weer van\ndienst kan zijn! Dzzt!\n\n\nVoor meesteres Fi reis ik overal naartoe,\ndzzt!")
/*<128>*/ 	zone_temp_flags[2 /* 0x1 04 */] = true;
          }

          void entrypoint_118_04() {
          	start()
/*< 12>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 13, 'param3': 32}
/*< 13>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 145, 'param3': 32}
/*<145>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5386, 'param2': 3072, 'next': 16, 'param3': 13}
/*< 16>*/ 	set_camera(1, 0)
/*< 14>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 8, 'next': 9, 'param3': 16}
/*<  9>*/ 	printf("\x0E\x01\x09\x04\x1509\xD11Sijsje! Sijsje! Waar zou ze toch zijn?!")
/*<  8>*/ 	set_camera(2, 0)
/*<146>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf("O, Sijsje... Waar ben je toch?\n\n\n\nStel nou dat ze... ontvoerd is!")
/*< 15>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 369, 'param3': 16}
/*<369>*/ 	printf("\x0E\x01\x09\x04\x150E\xD11Ah! \x0E\x03\x01\x00Link!")
/*<345>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 344, 'param3': 47}
/*<344>*/ 	set_camera(14, 0)
/*<342>*/ 	{'type': 'type3', 'subType': 2, 'param1': 48, 'param2': 356, 'next': 341, 'param3': 15}
/*<341>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 365, 'param3': 17}
/*<365>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5390, 'param2': 3840, 'next': 346, 'param3': 13}
/*<346>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 370, 'param3': 48}
/*<370>*/ 	{'type': 'type3', 'subType': 2, 'param1': 48, 'param2': 100, 'next': 340, 'param3': 14}
/*<340>*/ 	entrypoint_118_25();
          }

          void entrypoint_118_21() {
/*<151>*/ 	start()
/*<166>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<150>*/ 		printf("Roep me maar als u me weer nodig heeft,\ndzzzrp!")
          	  case 1:
/*<149>*/ 		printf("Ik heb een zeldzame Kikwi meegebracht,\ndzzkk!")
/*<167>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

