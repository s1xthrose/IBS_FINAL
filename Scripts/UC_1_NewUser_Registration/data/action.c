Action()
{

	lr_start_transaction("open_homepage");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_user("sfefergerg", 
		lr_unmask("647ca8fdf1e06df849d8"), 
		"www.advantageonlineshopping.com:443");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=114", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"nmmhkkegccagdldgiimedpiccmgmieda");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-114.0.5735.91");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:lZil4sME9tJKOoM3Lfp8Enj-4rlFHBa-qeTfkKKn9QQ&cup2hreq=1ce6008e93c190343681b33d088cdf3aa1c91f14d4741578776147ed723ddd51", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5998,\"installedby\":\"other\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\"ping\":{\"ping_freshness\":\"{d47ce534-4d0b-4941-ae46-71eaac3f5b76}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"1.0.0.6\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\""
		":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.2965\"},\"prodversion\":\"114.0.5735.91\",\"protocol\":\"3.1\",\"requestid\":\"{3f9f2346-80b7-44da-a6b1-1a944e95e7b4}\",\"sessionid\":\"{6c1c08fa-5a9d-4a1e-b08a-0760c22aae35}\",\"updaterversion\":\"114.0.5735.91\"}}", 
		LAST);

	web_add_cookie("_gid=GA1.2.904682873.1685878907; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga=GA1.2.401783448.1685878901; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1685881356.2.1.1685882841.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Not.A/Brand\";v=\"8\", \"Chromium\";v=\"114\", \"Google Chrome\";v=\"114\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("www.advantageonlineshopping.com", 
		"URL=https://www.advantageonlineshopping.com/", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/vendor/requirejs/require.js", ENDITEM, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/app/tempFiles/popularProducts.json", ENDITEM, 
		LAST);

	web_add_cookie("NID=511=ne2YIakdyDpeuFbWjz4NQmCSNXTTtuOV03B9TwlR8Y-STJW__k4A2X2wd9wtEYCn1pZdCNe3D24z_030p2ki79mHfYWlVTVtaaWn585G4hVzvF3LaTHhxLYy0WPqaDSJnjGnG6mYjks1jGWiq-GnjXehN7mrq6jyeK8SDx9ol28; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_url("l", 
		"URL=https://translate.googleapis.com/translate_a/l?client=chrome&hl=ru&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("sec-ch-ua", 
		"\"Not.A/Brand\";v=\"8\", \"Chromium\";v=\"114\", \"Google Chrome\";v=\"114\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("ALL", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1685891141.3.0.1685891141.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_url("categories", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	lr_end_transaction("open_homepage",LR_AUTO);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,neifaoindggfcjicffkgpmnlppeffabd,khaoiebndkojlmppeemjhbpbandiljpe,lmelglejhemejginpboagddgdfbepgmp,llkgjffcdpffmhiakmfcdcblohccpfmo,laoigpblnllgcgjnjnllmfolckpjlhki,hfnkpimlhhgieaddgfemjhofmfblmnib,ehgidpndbllacpjalkiimkbadgjfnnmc,oimompecagnajdejgnnjijobebaeigek,jflookgnkcckhobaglndicnbbgbonegd,jamhcnnkihinmdlkakkaopbjbbcngflc,hnimpnehoodheedghdeeijklkeaacbdc,efniojlnjndmcbiieegkicadnoecjjef,ggkkehgbnfjpeggfpleeakpidbkibbmn,obedbbhbpmojnkanicioggnmelmoomoc,"
		"imefjhfbkmcmebodilednhmaccmincoa,gcmjkmgdlgnkkcocmoeiminaijmmjnii,giekcmmlnklenlaomppkphknjmnnpneh,ojhpjlocmbogdgmfpkhlaaeamibhnphh,eeigpngbgcognadeebkilcpcaedhellh,gonpemdgkjcecdgbnaabipppbmgfggbe");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-114.0.5735.91");

	lr_think_time(20);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:bilkGFMsnqiXngtDCeeYqq6Lgy7ETWfTRor-kRMEZnA&cup2hreq=8b43fe4be413b93ca93684a19ebe02d9993c044333094ebd5eb5ffc51ca2537d", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{4b3c4a06-0abc-4fa3-a14d-cdf892ded690}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Windows (102+, canary/dev/beta/"
		"stable)\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.faef821457e35b44f92e45ae9c7c4424eb39c8f8bd02562a358bd2c5542570b9\"}]},\"ping\":{\"ping_freshness\":\"{6243831b-69e7-42d0-88e8-fb699788735c}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"1.0.2512.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\""
		"fp\":\"1.4d4a9ece68f12d31fb4ebe458e7cbbce6bd27a5d363bce3344b1f4b5c6b024b4\"}]},\"ping\":{\"ping_freshness\":\"{4d62dc94-1666-4489-8ba8-bab6852fa35e}\",\"rd\":5998},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"58\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.b5cd54a88dcc5c066af2a939c533ecfb73019547dc6d069a66cae33f255b8746\"}]},\""
		"ping\":{\"ping_freshness\":\"{e91305e9-0435-4ad2-9d3f-b59ff7fa9462}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"394\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.ab8d70a60ce0fba1355fad4edab88fd4d1bccc566b230998180183d1d776992b\"}]},\"ping\":{\"ping_freshness\":\"{08ba8c2b-e137-40fd-ab0a-17ca0bc120fb}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"1.0.0.13\"},"
		"{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{82405b76-f603-4415-aa48-07ed2c6956b6}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{"
		"\"fp\":\"1.7e688343addf2522960fdd722e9c29e02f95540288308496d2607f35f83e551c\"}]},\"ping\":{\"ping_freshness\":\"{b2cb24c6-42b8-4c9a-ab74-e0c48f73eb01}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"8033\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\""
		"ping_freshness\":\"{700c6a99-249f-4b14-afa5-449605a569c8}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1n4r:\",\"cohortname\":\"4.10.2652.1 for 113+\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.37a3ce45e4db03ee45245937e81291fc7f3c8faf62e4f05ad48f544a783542c3\"}]},\"ping\":{\"ping_freshness\":\"{75edac5a-29b6-4f85-af28-73610fa824cb}\",\"rd\":5998},\""
		"updatecheck\":{},\"version\":\"4.10.2652.1\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a9c3fb119d9e91ee3cd6c5bb93122a46f8e722e1986ee209d5747c327d238f87\"}]},\"ping\":{\"ping_freshness\":\"{3fd17fa3-ebf5-4076-9258-e641bc352af6}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"2962\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.0e491a1273432618abd13b7a503c68d59c9a6918956166d33b98e2ae58c3c199\"}]},\"ping\":{\"ping_freshness\":\"{c4a18465-024d-4f0d-b552-803593396d69}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"116.0.5811.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\""
		"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{488d194a-0a6e-4ba2-b078-4b9511912236}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.f482550ed2921321aa4692efc86ff21e35dc41119d2c468e40fca36f6b31e460\"}]},\"ping\":{\"ping_freshness\":\"{10e6e90a-8945-4390-bbe4-18487d06561d}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"605\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:\",\"cohortname\":\"108-and-above-all-users\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.ed2f4d0fa9d2f99837719f80e3990498314290c6a294a72296ddcada784dd278\"}]},\""
		"ping\":{\"ping_freshness\":\"{6583b2c9-699d-4016-8fd5-ec1268b2ed80}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"2022.12.16.779\"},{\"accept_locale\":\"RU500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.17c79175d6a9b0809c465d3636064510cf1997abb09b33c8c29fd6544cc2c9cb\"}]},\"ping\":{\"ping_freshness\":\""
		"{06db883f-e45a-4738-bd91-246a5a3a7f36}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"20230524.536550353.14\"},{\"appid\":\"imefjhfbkmcmebodilednhmaccmincoa\",\"brand\":\"GGLS\",\"cohort\":\"1:1iaf:\",\"cohortname\":\"windows_flatbuffers\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3525bd7c472e4c85cadf1b8d0992ca8303b9e630831e4530e54a14a70f213a11\"}]},\"ping\":{\"ping_freshness\":\"{4465a280-ee96-48b5-a589-d41469bc34c2}\",\"rd\":5998},\"tag\":\""
		"desktop_1_flatbuffer\",\"updatecheck\":{},\"version\":\"30.2\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"M54AndUp\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.1482735f1e6f6a7151f8bbe11abf8e6ff034bcf0466ed44f804e8a819243a7ca\"}]},\"ping\":{\"ping_freshness\":\"{02ccc4b9-8329-40d1-bf4b-23c4129a0062}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"9.45.0\"},{\"appid\":\""
		"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{852810c0-8834-46fa-baca-bbb5bbd7ef1f}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users"
		"\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{19b1b561-e05f-4bc2-9912-45f04c89f6c9}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{c0273d55-e607-4d4a-9622-e65681747b1b}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"_internal_experimental_sets\":\"false\",\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"General release\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c4137d1ea479cdf5cbe29e09e4cef452fba88fecb53cd82414432cd3825329f8\"}]},\"ping\":{\"ping_freshness\":\"{879dedcc-7c86-4ba4-900f-12600fe85c3d}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"2023.5.17.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.19045.2965\"},\"prodversion\":\"114.0.5735.91\",\"protocol\":\"3.1\",\"requestid\":\"{200287c3-9873-40a9-b0c6-266c3eaf0dd5}\",\"sessionid\":\"{c25c753d-b95a-43fd-81c8-438b79655236}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.242\"},\"updaterversion\":\"114.0.5735.91\"}}", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINMTE0LjAuNTczNS45MRopCAUQARobCg0IBRAGGAEiAzAwMTABELL1EBoCGAQD9A6yIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARC6tAwaAhgEHOswrCIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQ4vkMGgIYBNJv2vAiBCABIAIoARonCAEQARoZCg0IARAGGAEiAzAwMTADEBQaAhgEH2nYQCIEIAEgAigDGigIARAIGhoKDQgBEAgYASIDMDAxMAQQqTMaAhgEqzZ7GSIEIAEgAigEGigIDxABGhoKDQgPEAYYASIDMDAxMAEQ9ngaAhgEevSq7SIEIAEgAigBGicIChAIGhkKDQgKEAgYASIDMDAxMAEQBxoCGAS_dbvkIgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAgGgIYBJhy__kiBCABIAIoARooCAgQARoaCg"
		"0ICBAGGAEiAzAwMTABEPoSGgIYBClz4YciBCABIAIoARopCA0QARobCg0IDRAGGAEiAzAwMTABELHrARoCGAQsbL8NIgQgASACKAEaKQgDEAEaGwoNCAMQBhgBIgMwMDEwARCpqgwaAhgE_KVm0CIEIAEgAigBGikIDhABGhsKDQgOEAYYASIDMDAxMAEQwoQHGgIYBELoIEIiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEO8ZGgIYBATOByEiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		LAST);

	lr_start_transaction("click_Regist");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("sec-ch-ua", 
		"\"Not.A/Brand\";v=\"8\", \"Chromium\";v=\"114\", \"Google Chrome\";v=\"114\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(19);

	web_url("register-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/user/views/register-page.html", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetCountriesRequest");

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetCountriesRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetCountriesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("click_Regist",LR_AUTO);

	lr_start_transaction("comlete_profile");

	lr_end_transaction("comlete_profile",LR_AUTO);

	lr_start_transaction("click_end_regist");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountCreateRequest");

	lr_think_time(113);

	web_custom_request("AccountCreateRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountCreateRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountCreateRequest xmlns=\"com.advantage.online.store.accountservice\"><accountType>USER</accountType><address>fwefwefwef</address><allowOffersPromotion>true</allowOffersPromotion><cityName>fewefwef</cityName><countryId>Bahrain,bh</countryId><email"
		">ergergerwdwger@efef.com</email><firstName>efwefwfe</firstName><lastName>wefwefwefwe</lastName><loginName>sfefergerg</loginName><password>1111Rr</password><phoneNumber>23234234234</phoneNumber><stateProvince>wfwfwew</stateProvince><zipcode>wefwfewe</zipcode></AccountCreateRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_custom_request("AccountLoginRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email>ergergerwdwger@efef.com</email><loginPassword>1111Rr</loginPassword><loginUser>sfefergerg</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	lr_end_transaction("click_end_regist",LR_AUTO);

	lr_start_transaction("logout");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	lr_think_time(8);

	web_url("681405280", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/681405280", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1685891141.3.1.1685891315.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLogoutRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("AccountLogoutRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLogoutRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>681405280</loginUser><base64Token>Basic c2ZlZmVyZ2VyZzoxMTExUnI=</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("logout",LR_AUTO);

	return 0;
}