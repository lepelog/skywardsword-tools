          void entrypoint_400_13() {
/*< 33>*/ 	start()
/*< 34>*/ 	printf("...")
          }

          void entrypoint_400_65() {
/*<161>*/ 	start()
/*<162>*/ 	printf("We zijn aangekomen bij de <b<Lanayru-mijn>>.\n\n\n\nU kunt gebruikmaken van detectie om de\nlocatie te vinden waar de proef begint die u\ntoegang zal geven tot de heilige vlam.")
/*<163>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_30() {
/*<234>*/ 	start()
/*<235>*/ 	printf("Wat? Zoek je werk, zrrpt? Doe dan snel\ndie malle muts af en kom terug met een\ndegelijke helm, vrroem!")
/*<244>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_14() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf("De mijnwagen die voor de deur staat, komt\nhier langs. Het is hier dus te gevaarlijk\nvoor jou en je kunt maar beter weggaan,\nvrrm!")
/*< 71>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_66() {
/*<164>*/ 	start()
/*<165>*/ 	printf("We zijn aangekomen in de <b<Lanayru-\nwoestijn>>.\n\n\nU kunt gebruikmaken van detectie om de\nlocatie te vinden waar de proef begint die u\ntoegang zal geven tot de heilige vlam.")
/*<166>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_31() {
/*<236>*/ 	start()
/*<237>*/ 	printf("...")
          }

          void entrypoint_400_15() {
/*< 37>*/ 	start()
/*<304>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<305>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_38:
/*< 38>*/ 			printf("...")
          		  case 1:
/*<342>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				flw_307:
/*<307>*/ 				printf("...")
          			  case 1:
/*<306>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 307, 'param3': 31}
          				goto flw_307
          			}
          		}
          	  case 1:
          		goto flw_38
          	}
          }

          void entrypoint_400_67() {
/*<167>*/ 	start()
/*<168>*/ 	printf("We zijn aangekomen bij de <b<Tempel des\nTijds>>.\n\n\nU kunt gebruikmaken van detectie om de\nlocatie te vinden waar de proef begint die\nu toegang zal geven tot de heilige vlam.")
/*<169>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_32() {
/*<238>*/ 	start()
/*<239>*/ 	printf("Die rare dingen zijn de laatste tijd\nagressief, vrrm. We hebben geen wapens,\ndus als we worden aangevallen maken ze\nons tot schroot, phweep!")
/*<245>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_16() {
/*< 39>*/ 	start()
/*<  9>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<308>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<309>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_12:
/*< 12>*/ 				printf("Ben je nog hier? Wees voorzichtig als je\nverdergaat, vrrm!")
          			  case 1:
/*<310>*/ 				printf("Ben je op zoek naar een drakengod, zrrpt?\n\n\n\n\x0E\x01\x09\x04\x1303\x00<b<Meester Donderdraak>> is momenteel ten\nzuiden van de <b<Lanayru-grotten>>, bzzt. Dat\nis de enige draak die ik ken, fwoep.")
/*<341>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_12
          		}
          	  case 1:
/*<  5>*/ 		switch (story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */]) {
          		  case 0:
          			flw_10:
/*< 10>*/ 			printf("Ik heb <r<grijpscharen ingebouwd om dingen\nmee op te pakken>>, bvrrt. Succes verder,\nzrrt!")
/*< 77>*/ 			scene_flags[7 'Lanayru Desert'][5 /* 0x1 20 */] = true;
/*<280>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<  6>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<274>*/ 				printf("\x0E\x01\x09\x04\x1303\x00Dank je wel, zrrt!")
/*<275>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 276, 'param3': 47}
/*<276>*/ 				set_camera(6, 0)
/*<278>*/ 				{'type': 'type3', 'subType': 2, 'param1': 27, 'param2': 356, 'next': 277, 'param3': 15}
/*<277>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 279, 'param3': 17}
/*<279>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 7, 'param3': 48}
/*<  7>*/ 				printf("\x0E\x01\x09\x04\x1303\x00Als jij er niet was geweest, hadden ze al\nmijn stroom opgezogen, vrrm!\n\n\nO...<pause1E> Kijk eens aan, zrrpt... Je hebt een\n<y+<<item35>>>. Een verouderd model uit Lanayru,\nals ik het goed heb.\n\nOm je te bedanken dat je me hebt gered,\nwil ik die wel voor je <r<verbeteren>>, zwoeep.\n\x0E\x01\x09\x04\x1303\x00Geef maar even hier, zzzing!")
/*< 91>*/ 				make_actor_do_something(0, 0)
/*<281>*/ 				{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 8, 'param3': 42}
/*<  8>*/ 				give_item(75 0x4B);
/*< 11>*/ 				story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */] = true;
          				goto flw_10
          			  case 1:
/*<  4>*/ 				printf("Help, zrrt!")
/*< 76>*/ 				scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
/*<228>*/ 				scene_flags[7 'Lanayru Desert'][28 /* 0x2 10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_400_50() {
/*< 58>*/ 	start()
/*<142>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*< 59>*/ 	printf("\x0E\x01\x05\x04Z\x00\x0E\x01\x12\x04\x00\x0BAttentie, meester Link. We\nzijn aangekomen bij de <b<Lanayru-mijn>>.")
          }

          void entrypoint_400_68() {
/*<170>*/ 	start()
/*<172>*/ 	set_camera(-1, 0)
/*<171>*/ 	printf("Mijn gelukwens, \x0E\x01\x12\x04\x00\x04meester.")
/*<173>*/ 	printf("\x0E\x01\x12\x04\x00\x01U heeft de proef doorstaan. Met de kracht\ndie u nu bezit, kunt u de heilige vlam\nbereiken die zal worden toevertrouwd aan\nuw zwaard en uw sterke ziel.")
/*<175>*/ 	set_camera(3, 0)
/*<174>*/ 	printf("De <y<grijpklauwen >>behoren tot de gaven\nvan de godin.\n\n\nU kunt deze klauwen naar <r<doelwitten >>en\n<r<klimop>> schieten om uzelf te verplaatsen.")
/*<177>*/ 	set_camera(-1, 0)
/*<176>*/ 	printf("De vlam bevindt zich ergens in de\nwoestijn... Volgens mijn schatting moeten\nwe op een locatie zoeken die we nog niet\nhebben bezocht, \x0E\x01\x12\x04\x00\x01meester.")
          }

          void entrypoint_400_33() {
/*<240>*/ 	start()
/*<241>*/ 	printf("...")
          }

          void entrypoint_400_17() {
/*< 40>*/ 	start()
/*<125>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<216>*/ 		switch (scene_flags[89 /* 0xA 02 */]) {
          		  case 0:
/*<218>*/ 			printf("\x0E\x01\x09\x04\x16\x2007Ik ga snel binnen een kijkje nemen! \x0E\x01\x09\x04\x00\x2000Ik kan\nniet te lang blijven voor ik weer naar de\nVerzegelde Vallei moet, dus ik moet het kort\nhouden.")
          		  case 1:
/*<126>*/ 			printf("\x0E\x01\x09\x04\x15\x1B09Huh? Hoe ben jij binnen gekomen? Goro!\n\n\n\n\x0E\x01\x09\x04\x15\x1B00Wil je zeggen dat er een geheime gang is\nwaar ik niets van weet? Waarom heb je\ndat niet gezegd?!\n\n\x0E\x01\x09\x04\x08\x2100Ik had het opgegeven en was al begonnen\naan mijn terugtocht, toen ik die enorme\nknal hoorde. Toen ik hier kwam, bleek de\nweg vrij.\n\x0E\x01\x09\x04\x16\x2007Ik ga snel binnen een kijkje nemen! \x0E\x01\x09\x04\x00\x2000Ik kan\nniet te lang blijven voor ik weer naar de\nVerzegelde Vallei moet, dus ik moet het kort\nhouden.")
/*<217>*/ 			scene_flags[7 'Lanayru Desert'][89 /* 0xA 02 */] = true;
          		}
          	  case 1:
/*<150>*/ 		switch (scene_flags[73 /* 0x8 02 */]) {
          		  case 0:
/*<152>*/ 			printf("\x0E\x01\x09\x04\x16\x2007Ik wou dat ik kon zien wat er achter deze\nmuur zit. Misschien is er ergens nog een\ningang?")
          		  case 1:
/*< 41>*/ 			printf("\x0E\x01\x09\x04\x00\x02Goed je te zien, maatje! Jij duikt\nwerkelijk overal op... zeg ik terwijl ik zelf\nook veel rondreis.\n\n\x0E\x01\x09\x04\x17\x2008Hoe dan ook, ik heb net de ontdekking\nvan de eeuw gedaan!\n\n\n\x0E\x01\x09\x04\x00\x2000Dit gewijde gebouw heet de <b<Tempel des\nTijds>>.\n\n\n\x0E\x01\x09\x04\x00\x190AIk kon mijn ogen niet geloven toen ik <r<een\nmens van het legendarische eiland van de\ngodin>> zag!\n\n\x0E\x01\x09\x04\x00\x1900Met net zulke kleren als die de mensen uit\nde manuscripten dragen! Net zulke kleren\nals de jouwe, maatje!\n\n\x0E\x01\x09\x04\x08\x2105Er was nog een andere mens bij. Ze\ngingen samen de tempel in en ik wilde\nze volgen, maar...\n\n\x0E\x01\x09\x04\x15\x1B00...toen was er een plotselinge explosie en,\nwel, je kunt wel zien wat er van de ingang\nover is.\n\n\x0E\x01\x09\x04\x16\x2007Ik denk niet dat we hierlangs binnen\nkomen. Ik wou dat we konden zien wat er\naan de andere kant gebeurt!")
/*<151>*/ 			scene_flags[7 'Lanayru Desert'][73 /* 0x8 02 */] = true;
          		}
          	}
          }

          void entrypoint_400_51() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf("Bij dezen bevestig ik dat er op deze locatie\neen tijdverschuiving heeft plaatsgevonden.\n\n\nAls de blauwe stenen in beroering worden\ngebracht, wordt de temporele ruimte\neromheen verstoord. Naar mijn inschatting\nzijn we nu <r<<pling>in een voorgaande tijd>>.")
          }

          void entrypoint_400_69() {
/*<207>*/ 	start()
/*<208>*/ 	printf("Voorkom arbeidsongelukken,\nvrrm! Veiligheid voor alles, zrrt!\n             \x09  --Afdelingshoofd")
          }

          void entrypoint_400_34() {
/*<242>*/ 	start()
/*<243>*/ 	printf("Heb je interesse in chronokristallen? Dan\nmoet je <b<Lanayru's mijnbouwcentrum>>\neens bezichtigen, zwoep!")
/*<246>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_52() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf("Mijn metingen wijzen uit dat er hier\nonderdelen zijn voor de <b<transistor>>.\nU kunt ze nu opsporen door middel van\n<pling><r<detectie>>.")
/*<220>*/ 	story_flags[107 /* us: 805A9AE1 0x01, jp: 805ACD61 0x01 */] = true;
/*<291>*/ 	open_dowsing_wheel(3)
/*<268>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_35() {
/*<247>*/ 	start()
/*<248>*/ 	printf("...")
          }

          void entrypoint_400_01() {
          	start()
/*<  1>*/ 	printf("...")
          }

          void entrypoint_400_19() {
/*< 42>*/ 	start()
/*<311>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<312>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf("...")
          		  case 1:
/*<344>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_43
          			  case 1:
/*<313>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 43, 'param3': 31}
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
/*<114>*/ 	printf("")
/*<159>*/ 	set_camera(1, 0)
/*<160>*/ 	printf("")
/*<178>*/ 	set_camera(-1, 0)
/*<179>*/ 	printf("")
          }

          void entrypoint_400_70() {
/*<209>*/ 	start()
/*<210>*/ 	printf("Maandproductie:\n150 containers\n                  --Afdelingshoofd")
          }

          void entrypoint_400_36() {
/*<249>*/ 	start()
/*<250>*/ 	printf("Chronokristallen zijn een bron van energie\nvoor ons en de machines die we gebruiken,\nbiep! Daarom moeten we ze blijven delven,\nbzzt!")
/*<259>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("")
/*< 72>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_54() {
/*<100>*/ 	start()
/*<205>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<206>*/ 		printf("\x0E\x01\x09\x04\x2F08\x709\x0E\x03\x01\x00Link! Ben je in het\nterritorium van de draak geweest?!<pause54>\n\n\n\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x08\x02\x2CDIk ben er jaloers van!<pause5A>\n\n\n\n\x0E\x01\x09\x04\x2F0F\x706\x0E\x01\x08\x02\x2CDJe hebt me weer eens\novertroffen, jochie!")
          		flw_149:
/*<149>*/ 		scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
          	  case 1:
/*<109>*/ 		switch (scene_flags[75 /* 0x8 08 */]) {
          		  case 0:
/*<111>*/ 			printf("\x0E\x01\x09\x04\x2F08\xD0AIk heb een gang gevonden die naar de\nplek leidt waar de <r<donderdraak>> woont.<pause2D>\n\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F0D\x800Maar deze holte is te krap voor een\nforse kerel als ik. \x0E\x01\x06\x02\xFFCD \x0E\x01\x09\x04\x2F08\x700Jammer, maar niks\naan te doen...")
          			goto flw_149
          		  case 1:
/*<112>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 105, 'param3': 31}
/*<105>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<272>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Hallo, hallo, Link.")
/*<273>*/ 				set_camera(5, 0)
/*<108>*/ 				printf("Hoe gaat de zoektocht naar de <b<heilige\nvlam>>? Heb je die al gevonden?!\n\n\nIk ben heel nieuwsgierig of het je is gelukt.\nDus... Heb je hem al?\n\n\n\x0E\x01\x09\x04\x2F08\x407O.<pause14>.<pause14>.<pause14> Dus na dat wilde avontuur heb je hem\neindelijk gevonden! \x0E\x03\x01\x00Link,\nje bent geweldig!")
/*<355>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0AWeet je, het wordt tijd dat ik je vertel wat\nik te weten ben gekomen over de legende\nvan de drie draken.<pause0F>\n\nIk heb sterk het vermoeden dat achter\ndeze wand een geheim deel van de\nwoestijn verborgen ligt!\n\nIk heb namelijk een <r<smalle gang>><pling>\ngevonden die te krap is voor mij om\ndoorheen te kruipen.\n\n\x0E\x01\x09\x04\x2F00\xD00Ik voel aan mijn water dat een van de\ndraken, de <r<donderdraak>>, in dat gebied\nwoont!\n\n\x0E\x01\x09\x04\x2F00\x800Deze robots hebben iets met die draak te\nmaken, dat weet ik zeker, maatje.<pause0F>\n\n\n<r<\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDDe donderdraak>>, robots, en chronokristallen<pause14>.<pause14>.<pause14>.<pause14>\n\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CDDat is nog eens een avontuur!")
/*<107>*/ 				printf("\x0E\x01\x09\x04\x08\xD00Ik moet je iets vertellen over die mijn die je\naan het verkennen was, Link!<pause14>\n\n\nIk heb een hele lading chronokristallen\ngevonden! \x0E\x01\x09\x04\x2F00\xD01Nu kan ik je het tienvoudige\nteruggeven van wat je mij hebt gegeven!")
/*<106>*/ 				rupees += 100;
          				flw_282:
/*<282>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 110, 'param3': 42}
/*<110>*/ 				scene_flags[7 'Lanayru Desert'][75 /* 0x8 08 */] = true;
/*<269>*/ 				story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<357>*/ 				story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<358>*/ 				story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<359>*/ 				story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          				goto flw_149
          			  case 1:
/*<270>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Hallo, hallo, Link.")
/*<271>*/ 				set_camera(5, 0)
/*<211>*/ 				printf("Hoe gaat de zoektocht naar de <b<heilige\nvlam>>? Heb je die al gevonden?!\n\n\nIk ben heel nieuwsgierig of het je is gelukt.\nDus... Heb je hem al?\n\n\n\x0E\x01\x09\x04\x2F08\x407O.<pause14>.<pause14>.<pause14> Dus na dat wilde avontuur heb je hem\neindelijk gevonden! \x0E\x03\x01\x00Link,\nje bent geweldig!")
/*<356>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0AWeet je, het wordt tijd dat ik je vertel wat\nik te weten ben gekomen over de legende\nvan de drie draken.<pause0F>\n\nIk heb sterk het vermoeden dat achter\ndeze wand een geheim deel van de\nwoestijn verborgen ligt!\n\nIk heb namelijk een <r<smalle gang>><pling>\ngevonden die te krap is voor mij om\ndoorheen te kruipen.\n\n\x0E\x01\x09\x04\x2F00\xD00Ik voel aan mijn water dat een van de\ndraken, de <r<donderdraak>>, in dat gebied\nwoont!\n\n\x0E\x01\x09\x04\x2F00\x800Deze robots hebben iets met die draak te\nmaken, dat weet ik zeker, maatje.<pause0F>\n\n\n<r<\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDDe donderdraak>>, robots, en chronokristallen<pause14>.<pause14>.<pause14>.<pause14>\n\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CDDat is nog eens een avontuur!")
          				goto flw_282
          			}
          		}
          	}
          }

          void entrypoint_400_71() {
/*<213>*/ 	start()
/*<214>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester Link.")
/*<295>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 296, 'param3': 30}
/*<296>*/ 	printf("De symbolen op de transistor komen\novereen met die van de generatoren die u\nheeft geactiveerd. Een relatie daartussen is\naannemelijk.")
/*<297>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          }

          void entrypoint_400_37() {
/*<251>*/ 	start()
/*<252>*/ 	printf("...")
          }

          void entrypoint_400_03() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("...")
          }

          void entrypoint_400_20() {
/*< 44>*/ 	start()
/*< 63>*/ 	switch (scene_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<314>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<315>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_66:
/*< 66>*/ 				printf("Het maakt niet uit hoe vaak ik de Tempel\ndes Tijds zie. Van de aanblik gaan mijn\nnetwerken iedere keer weer gloeien, zrrp!")
          			  case 1:
/*<316>*/ 				printf("Ben je op zoek naar een drakengod, zrrpt?\n\n\n\n\x0E\x01\x09\x04\x1303\x00<b<Meester Donderdraak>> is momenteel ten\nzuiden van de <b<Lanayru-grotten>>, bzzt. Dat\nis de enige draak die ik ken, fwoep.")
/*<343>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_66
          		}
          	  case 1:
/*< 94>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*< 96>*/ 			printf("Dat was eng, vrrrrrm...\nBedankt dat je me hebt gered, bzzt.")
/*< 93>*/ 			make_actor_do_something(1, 0)
/*< 45>*/ 			printf("\x0E\x01\x09\x04\x03\x900Dit is de <b<Tempel des Tijds>>. Binnen bevindt\nzich de heilige <b<Poort des Tijds>>, die gemaakt\nis door de godin, bzzt.\n\n\x0E\x01\x09\x04\x03\x900Het is mijn taak om buiten de tempel de\nwacht te houden, vrrm! Als je de Poort des\nTijds zoekt, zul je eerst door die deur\nmoeten, bzzap.\n\x0E\x01\x09\x04\x03\x900Huh? Zoek je een andere ingang, fwiep?\n\n\n\n\x0E\x01\x09\x04\x03\x900Nou, er is een <r<ondergrondse verbinding\n>>tussen <b<Lanayru's mijnbouwcentrum>> en de\n<b<Tempel des Tijds>>, dzzt.\nLanayru's mijnbouwcentrum vind je hier!")
/*<202>*/ 			make_actor_do_something(2, 0)
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 30}
/*<215>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 90, 'param3': 6}
/*< 90>*/ 			scene_flags[7 'Lanayru Desert'][3 /* 0x1 08 */] = true;
/*< 99>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 97, 'param3': 6}
/*< 97>*/ 			printf("Die kaart die je daar hebt... Die klopt niet,\nbzzt. Ik zal hem snel even voor je\nbijwerken, zrrm!")
/*< 64>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 3, 'next': 197, 'param3': 30}
/*<197>*/ 			{'type': 'type3', 'subType': 2, 'param1': 9, 'param2': 356, 'next': 67, 'param3': 15}
/*< 67>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 200, 'param3': 34}
/*<200>*/ 			set_camera(4, 0)
/*<199>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 65, 'param3': 17}
/*< 65>*/ 			printf("\x0E\x01\x09\x04\x03\x900Lanayru's mijnbouwcentrum is verderop.\nSucces, vrrt!")
/*<203>*/ 			make_actor_do_something(3, 0)
/*< 68>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 0, 'next': 89, 'param3': 14}
/*< 89>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 101, 'param3': 17}
/*<101>*/ 			story_flags[129 /* us: 805A9AED 0x40, jp: 805ACD6D 0x40 */] = true;
/*<196>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
/*<198>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 201, 'param3': 17}
/*<201>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 204, 'param3': 42}
/*<204>*/ 			make_actor_do_something(4, 0)
          		  case 1:
/*< 95>*/ 			printf("Help, zrrt!")
/*<127>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
          		}
          	}
          }

          void entrypoint_400_55() {
/*<102>*/ 	start()
/*<283>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x01meester. Ik kan de aura van\n<b<Zelda>> niet langer waarnemen.")
/*<284>*/ 	set_camera(7, 0)
/*<285>*/ 	printf("Vanaf het moment dat de poort werd\nvernietigd, heb ik Zelda's aanwezigheid\nniet meer waargenomen. <pling><r<U kunt haar niet\nlanger opsporen door middel van detectie>>.")
/*<286>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf("Zelda's metgezel heeft u gevraagd om de\noude wijze in de Verzegelde Vallei te\nbezoeken.\n\nMijn geheugen bevat informatie over deze\nlocatie. Mijn voorstel is om de <b<Verzegelde\nTempel >>te bezoeken.")
/*<104>*/ 	scene_flags[7 'Lanayru Desert'][57 /* 0x6 02 */] = true;
/*<219>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = false;
/*<287>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_400_72() {
/*<221>*/ 	start()
/*<222>*/ 	printf("Schoonmaakrooster voor\nTempel des Tijds\n                  --Afdelingshoofd")
          }

          void entrypoint_400_38() {
/*<253>*/ 	start()
/*<254>*/ 	printf("Hier komen niet vaak mensen, brrt. Ben je\nsoms geïnteresseerd in chronokristallen,\nvwoep?")
/*<260>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_04() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf("")
/*< 73>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_21() {
/*< 46>*/ 	start()
/*<317>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<318>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_47:
/*< 47>*/ 			printf("...")
          		  case 1:
/*<346>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_47
          			  case 1:
/*<319>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 47, 'param3': 31}
          				goto flw_47
          			}
          		}
          	  case 1:
          		goto flw_47
          	}
          }

          void entrypoint_400_56() {
/*<128>*/ 	start()
/*<129>*/ 	printf("")
          }

          void entrypoint_400_73() {
/*<223>*/ 	start()
/*<224>*/ 	printf("Help planten tijdens de droogte!\nHou Lanayru groen, zzt!\n                  --Afdelingshoofd")
          }

          void entrypoint_400_39() {
/*<255>*/ 	start()
/*<256>*/ 	printf("...")
          }

          void entrypoint_400_05() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf("")
          }

          void entrypoint_400_22() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[103 /* 0xD 80 */]) {
          	  case 0:
/*< 79>*/ 		switch (scene_flags[30 /* 0x2 40 */]) {
          		  case 0:
/*<320>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<321>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_81:
/*< 81>*/ 					switch (scene_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*< 83>*/ 						printf("Dit is <b<Lanayru's mijnbouwcentrum>>, ping!\nHier worden chronokristallen gewonnen.\n\n\n\x0E\x01\x09\x04\x1303\x00Mijn rotoren draaien iedere keer weer op\nvolle toeren van bewondering als ik hier\nben, bzzt!")
          					  case 1:
/*< 82>*/ 						printf("Is het je gelukt om de externe generatoren\nte activeren, zrrbt? Dat is heel erg\nindrukwekkend... voor een mens, vrrm.\n\n\x0E\x01\x09\x04\x1303\x00Dit is <b<Lanayru's mijnbouwcentrum>>, zzring!\nHier worden chronokristallen gewonnen.\n\n\n\x0E\x01\x09\x04\x1303\x00Mijn rotoren draaien iedere keer weer op\nvolle toeren van bewondering als ik hier\nben, bzzt!")
/*< 84>*/ 						scene_flags[7 'Lanayru Desert'][8 /* 0x0 01 */] = true;
          						flw_85:
/*< 85>*/ 						scene_flags[7 'Lanayru Desert'][35 /* 0x5 08 */] = true;
          					}
          				  case 1:
/*<322>*/ 					printf("Ben je op zoek naar een drakengod, zrrpt?\n\n\n\n\x0E\x01\x09\x04\x1303\x00<b<Meester Donderdraak>> is momenteel ten\nzuiden van de <b<Lanayru-grotten>>, bzzt. Dat\nis de enige draak die ik ken, fwoep.")
/*<345>*/ 					story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          				}
          			  case 1:
          				goto flw_81
          			}
          		  case 1:
/*< 80>*/ 			printf("Ben je er al achter hoe je bij de externe\ngeneratoren komt? Pas als je die activeert,\nheeft het zin om de draaischijven om te\nzetten.")
          			goto flw_85
          		}
          	  case 1:
/*< 49>*/ 		printf("Jij staat niet in mijn geheugenbank, brrt.\n\n\n\n\x0E\x01\x09\x04\x1303\x00Dit is de transistor van Lanayru's\nmijnbouwcentrum, zrrpt! Tevens benodigd\nom toegang tot de faciliteit te krijgen.\n\n\x0E\x01\x09\x04\x1303\x00Hij geeft alleen geen sjoege, omdat je eerst\nde externe generatoren moet activeren\nen dan die <r<drie draaischijven >>op de juiste\nstand moet zetten.")
/*< 86>*/ 		scene_flags[7 'Lanayru Desert'][34 /* 0x5 04 */] = true;
          	}
          }

          void entrypoint_400_57() {
/*<130>*/ 	start()
/*<131>*/ 	printf("\x0E\x01\x05\x04Z\x00Tijdens een periode van honderden jaren is\ndit land veranderd in de onherbergzame\nwoestijn die nu voor ons ligt.")
          }

          void entrypoint_400_74() {
/*<229>*/ 	start()
/*<230>*/ 	switch (scene_flags[11 /* 0x0 08 */]) {
          	  case 0:
          	  case 1:
/*< 62>*/ 		printf("Mijn inschatting is dat dit voorwerp reeds\njaren defect is. Ik ben niet in staat om te\nontcijferen wat voor boodschap het bevat.")
/*<231>*/ 		scene_flags[7 'Lanayru Desert'][11 /* 0x0 08 */] = true;
          	}
          }

          void entrypoint_400_06() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("")
/*< 74>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_23() {
/*< 50>*/ 	start()
/*<323>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<324>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf("...")
          		  case 1:
/*<348>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_51
          			  case 1:
/*<325>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 51, 'param3': 31}
          				goto flw_51
          			}
          		}
          	  case 1:
          		goto flw_51
          	}
          }

          void entrypoint_400_58() {
/*<132>*/ 	start()
/*<133>*/ 	printf("\x0E\x01\x05\x04Z\x00Mijn berekeningen wijzen uit dat <b<Zelda\n>>door dit gebied is gereisd.")
/*<267>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<266>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_40() {
/*<257>*/ 	start()
/*<258>*/ 	printf("Een vriend van me is laatst ontvoerd, brrt!\nIk heb gehoord dat ze al zijn stroom\nhebben opgezogen.")
/*<261>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_75() {
/*<288>*/ 	start()
/*<289>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 2, 'next': 290, 'param3': 40}
/*<290>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': -1, 'param3': 6}
          }

          void entrypoint_400_07() {
/*< 21>*/ 	start()
/*< 22>*/ 	printf("...")
          }

          void entrypoint_400_24() {
/*< 52>*/ 	start()
/*<186>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<326>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<327>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_187:
/*<187>*/ 				printf("Is het je gelukt om de externe generatoren\nte activeren, zrrbt? Dat is heel\nindrukwekkend... voor een mens, vrrm.")
          			  case 1:
/*<328>*/ 				printf("Ben je op zoek naar een drakengod, zrrpt?\n\n\n\n\x0E\x01\x09\x04\x1303\x00<b<Meester Donderdraak>> is momenteel ten\nzuiden van de <b<Lanayru-grotten>>, bzzt. Dat\nis de enige draak die ik ken, fwoep.")
/*<347>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_187
          		}
          	  case 1:
/*<115>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*<116>*/ 			printf("Aaaah! Waar ben je mee bezig, vrrt?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Nou, het heeft toch geen zin om alleen\nmaar aan de draaiknoppen te zitten, bzzt!")
          			flw_155:
/*<155>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
/*<157>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<180>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 53>*/ 				printf("Probeer je uit te zoeken hoe je de\ntransistor activeert om in Lanayru's\nmijnbouwcentrum te komen, zrrpt?\n\n\x0E\x01\x09\x04\x1303\x00Je ziet er nogal verdacht uit, vrroem.\nDaarom vertel ik je niet hoe je de externe\ngeneratoren moet activeren om binnen te\nkomen, vrram.\n\x0E\x01\x09\x04\x1303\x00En je mag niets in de transistor steken\nof aan de draaischijven zitten, bzzt!")
          				goto flw_155
          			  case 1:
/*<181>*/ 				printf("Jij ziet er nogal verdacht uit, vrrm.\n\n\n\n\x0E\x01\x09\x04\x1303\x00Niet aan de draaischijven van de\ntransistor zitten. Begrepen, bzzt?")
          				goto flw_155
          			}
          		}
          	}
          }

          void entrypoint_400_59() {
/*<134>*/ 	start()
/*<143>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<135>*/ 	printf("<b<\x0E\x01\x05\x04Z\x00>>We zijn aangekomen in de <b<Lanayru-\nwoestijn>>. Een klimaatverandering heeft\nhet landschap in een zandvlakte veranderd.")
          }

          void entrypoint_400_76() {
/*<292>*/ 	start()
/*<293>*/ 	printf("We zijn aangekomen bij de <b<Tempel des\nTijds>>.\n\n\nU kunt gebruikmaken van detectie om de\nlocatie te vinden waar de proef begint die\nu toegang zal geven tot de heilige vlam.")
/*<294>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_08() {
/*< 23>*/ 	start()
/*<225>*/ 	switch (scene_flags[29 /* 0x2 20 */]) {
          	  case 0:
/*<226>*/ 		printf("Blijf weg bij de blauwe kristallen, zrrpt.\nDie zijn heel gevaarlijk voor mensen!\nEn probeer niet in de weg te lopen!")
          	  case 1:
/*< 24>*/ 		printf("Waar kom jij vandaan, bzzt? Wij\nverzamelen hier chronokristallen en\nbrengen die naar <b<Lanayru's mijnbouw-\ncentrum>>.\n\x0E\x01\x09\x04\x1303\x00Blijf uit de buurt van de blauwe kristallen,\nzrrpt. Die zijn heel gevaarlijk voor mensen!")
/*<227>*/ 		scene_flags[7 'Lanayru Desert'][29 /* 0x2 20 */] = true;
/*< 75>*/ 		scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          	}
          }

          void entrypoint_400_25() {
/*< 54>*/ 	start()
/*<329>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<330>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_55:
/*< 55>*/ 			printf("...")
          		  case 1:
/*<350>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_55
          			  case 1:
/*<331>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 31}
          				goto flw_55
          			}
          		}
          	  case 1:
          		goto flw_55
          	}
          }

          void entrypoint_400_77() {
/*<298>*/ 	start()
/*<299>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester Link, alle drie de\nexterne generatoren zijn nu geactiveerd.\n\n\nBegeef u naar de <r<transistor>> die voor\n<b<Lanayru's mijnbouwcentrum>> staat.")
          }

          void entrypoint_400_09() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("...")
          }

          void entrypoint_400_26() {
/*< 56>*/ 	start()
/*<188>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<332>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<333>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_189:
/*<189>*/ 				printf("Is het je gelukt om de externe generatoren\nte activeren, zrrbt? Dat is heel\nindrukwekkend... voor een mens, vrrm.")
          			  case 1:
/*<334>*/ 				printf("Ben je op zoek naar een drakengod, zrrpt?\n\n\n\n\x0E\x01\x09\x04\x1303\x00<b<Meester Donderdraak>> is momenteel ten\nzuiden van de <b<Lanayru-grotten>>, bzzt. Dat\nis de enige draak die ik ken, fwoep.")
/*<349>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_189
          		}
          	  case 1:
/*<117>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*<118>*/ 			printf("Ahhh! Waar ben je mee bezig, vrrt?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Ach, je komt toch niet binnen als je alleen\nmaar aan de draaiknoppen zit, bzzt.")
          			flw_153:
/*<153>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<158>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<182>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 57>*/ 				printf("Probeer je uit te zoeken hoe je de\ntransistor activeert om in Lanayru's\nmijnbouwcentrum te komen, zrrpt?\n\n\x0E\x01\x09\x04\x1303\x00Je ziet er verdacht uit, dus van mij hoor je\nniets over de externe generatoren die je\nmoet activeren, vrrm.\n\n\x0E\x01\x09\x04\x1303\x00En waag het niet om iets in de transistor\nte steken of aan de draaischijven te zitten,\nbzzt!")
          				goto flw_153
          			  case 1:
/*<183>*/ 				printf("Wat ben jij een verdacht persoon, vrrm.\n\n\n\n\x0E\x01\x09\x04\x1303\x00Iemand als jij mag niets in de transistor\nsteken of aan de draaischijven zitten,\nbzzt!")
          				goto flw_153
          			}
          		}
          	}
          }

          void entrypoint_400_60() {
/*<136>*/ 	start()
/*<137>*/ 	printf("\x0E\x01\x05\x04Z\x00Mijn metingen wijzen op de aanwezigheid\nvan <r<drijfzand>>. Als u daarin stapt, bestaat\nde kans dat het zand u levend opslokt. De\nkans op lichamelijk letsel is nu 30% hoger.")
          }

          void entrypoint_400_78() {
/*<300>*/ 	start()
/*<301>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester Link. Mijn\nanalyse wijst uit dat u deze <r<machine>> aan de\npraat kunt krijgen door hem van energie te\nvoorzien.")
          }

          void entrypoint_400_27() {
/*<119>*/ 	start()
/*<335>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<336>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_120:
/*<120>*/ 			printf("...")
          		  case 1:
/*<352>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_120
          			  case 1:
/*<337>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 120, 'param3': 31}
          				goto flw_120
          			}
          		}
          	  case 1:
          		goto flw_120
          	}
          }

          void entrypoint_400_61() {
/*<138>*/ 	start()
/*<139>*/ 	printf("\x0E\x01\x05\x04Z\x00Als voorzorgsmaatregel raad ik u aan om\nmet \x0E\x02\x04\x02\x2CD op uw kaart <r<<pling>het terrein te\nbestuderen>>.\x0E\x01\x11\x02\x2CD")
          }

          void entrypoint_400_79() {
/*<302>*/ 	start()
/*<303>*/ 	printf("\x0E\x01\x12\x04\x00\x0BAttentie, meester Link.\n\n\n\nDe kaart die u bezit, komt slechts voor 35%\novereen met het daadwerkelijke terrein in\ndit gebied.\n\nDe robot die uw kaart heeft aangepast,\nheeft gebieden aangegeven uit het <r<verleden>><pling>\ndie nu onder het drijfzand liggen.")
          }

          void entrypoint_400_10() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("Die mijnwagen wordt gebruikt om\nchronokristallen te vervoeren, zrrpt. Mensen\nmogen ze niet gebruiken, dus maak dat je\nwegkomt, vrrm!")
/*< 69>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_28() {
/*<121>*/ 	start()
/*<190>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<338>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<339>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				printf("Is het je gelukt om de externe generatoren\nte activeren, zrrbt? Dat is heel\nindrukwekkend... voor een mens, vrrm.")
          			  case 1:
/*<340>*/ 				printf("Ben je op zoek naar een drakengod, zrrpt?\n\n\n\n\x0E\x01\x09\x04\x1303\x00<b<Meester Donderdraak>> is momenteel ten\nzuiden van de <b<Lanayru-grotten>>, bzzt. Dat\nis de enige draak die ik ken, fwoep.")
/*<351>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_191
          		}
          	  case 1:
/*<123>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<124>*/ 			printf("Ahhh! Waar ben je mee bezig, vrrt?!\n\n\n\n\x0E\x01\x09\x04\x1303\x00Ach, als je alleen maar aan de\ndraaischijven zit, kom je toch niet binnen,\nbzzt.")
          			flw_154:
/*<154>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<156>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
          		  case 1:
/*<184>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<122>*/ 				printf("Probeer je uit te zoeken hoe je die\ntransistor activeert om in Lanayru's\nmijnbouwcentrum te komen, zrrpt?\n\n\x0E\x01\x09\x04\x1303\x00Je ziet er nogal verdacht uit, vrroem.\nDaarom vertel ik je niets over de externe\ngeneratoren waarmee je het mijnbouw-\ncentrum kunt openen, bzzt.\n\x0E\x01\x09\x04\x1303\x00En waag het niet om iets in de transistor\nte steken of aan de draaischijven te zitten,\nbzzt!")
          				goto flw_154
          			  case 1:
/*<185>*/ 				printf("Je ziet er verdacht uit, vrrm.\n\n\n\n\x0E\x01\x09\x04\x1303\x00Waag het niet om aan de transistor te\nzitten, bzzt!")
          				goto flw_154
          			}
          		}
          	}
          }

          void entrypoint_400_62() {
/*<140>*/ 	start()
/*<141>*/ 	printf("\x0E\x01\x05\x04Z\x00Mijn metingen wijzen uit dat <b<Zelda>> hier\nlangs is gekomen. Zoals eerder vermeld,\nis dit gebied extreem gevaarlijk.\n\n<b<\x0E\x01\x05\x04Z\x00>>Mijn advies is om haar zo snel mogelijk\nop te sporen om uit te zoeken waarom ze\nzich in <b<Eldin>> bevindt.")
          }

          void entrypoint_400_11() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf("...")
          }

          void entrypoint_400_63() {
/*<144>*/ 	start()
/*<145>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester Link, ik heb\ninformatie voor u.\n\n\nIk kan bevestigen dat het drijfzand op uw\nhuidige locatie ondiep is. Mijn advies is om\nuw locatie op de kaart grondig te\nbestuderen.")
/*<192>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 261, 'next': 193, 'param3': 30}
/*<193>*/ 	printf("Metingen wijzen uit dat er een pad ligt\nonder het drijfzand.\n\n\nHet is mogelijk om over dit pad te lopen\nzonder volledig weg te zinken in het\ndrijfzand.\n\nOp basis van mijn analyse kan ik het\ngebruik van bakens aanraden om een\nveilige route te markeren.")
/*<212>*/ 	printf("Ik raad u aan <b<meerdere>><pling> bakens te\nplaatsen.")
/*<195>*/ 	story_flags[745 /* us: 805A9B29 0x02, jp: 805ACDA9 0x02 */] = true;
/*<194>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          }

          void entrypoint_400_29() {
/*<232>*/ 	start()
/*<233>*/ 	printf("...")
          }

          void entrypoint_400_80() {
/*<353>*/ 	start()
/*<354>*/ 	printf("In de Lanayru-woestijn en op andere\nplaatsen komt er zo nu en dan <b<tuimelkruid>>\nlangsrollen.\n\nTuimelkruid kan gebruikt worden om\nverschillende voorwerpen te verbeteren. U\nkunt het tuimelkruid met een<r< net >>vangen.")
          }

          void entrypoint_400_12() {
/*< 31>*/ 	start()
/*< 32>*/ 	printf("Loop niet in de weg van de\nmijnbouwwerkzaamheden. En leid me niet af,\nzrpt!")
/*< 70>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_64() {
/*<146>*/ 	start()
/*<147>*/ 	printf("\x0E\x01\x09\x04\x2F0C\xD01\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x2F00\x01Hé, hallo! Dat lijkt mijn maatje\nLink wel. Ja hoor,\nje bent het echt!\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CDJe komt precies op het juiste\nmoment! <pause0F>Ik wil je wat laten zien.<pause0F>\n\n\n\x0E\x01\x06\x02\x2CD\x0E\x01\x08\x02\x1CDKom snel hierheen!")
/*<148>*/ 	scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
/*<262>*/ 	story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<263>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<264>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<265>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

