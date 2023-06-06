Action()
{

	lr_start_transaction("open_homepage");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_user("jSmith1", 
		lr_unmask("647cc5e5831921ff5a0e386390"), 
		"www.advantageonlineshopping.com:443");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=114", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_add_cookie("_gid=GA1.2.904682873.1685878907; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga=GA1.2.401783448.1685878901; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1685898235.5.1.1685898624.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
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

	web_add_cookie("_ga=GA1.1.401783448.1685878901; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1685898235.5.1.1685898664.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_url("www.advantageonlineshopping.com", 
		"URL=https://www.advantageonlineshopping.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/services.properties", ENDITEM, 
		"Url=/app/tempFiles/popularProducts.json", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	lr_think_time(4);

	web_url("l", 
		"URL=https://translate.googleapis.com/translate_a/l?client=chrome&hl=ru&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

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
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("categories", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	lr_end_transaction("open_homepage",LR_AUTO);

	lr_start_transaction("login");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,neifaoindggfcjicffkgpmnlppeffabd,oimompecagnajdejgnnjijobebaeigek,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hnimpnehoodheedghdeeijklkeaacbdc,lmelglejhemejginpboagddgdfbepgmp,obedbbhbpmojnkanicioggnmelmoomoc,giekcmmlnklenlaomppkphknjmnnpneh,llkgjffcdpffmhiakmfcdcblohccpfmo,hfnkpimlhhgieaddgfemjhofmfblmnib,khaoiebndkojlmppeemjhbpbandiljpe,laoigpblnllgcgjnjnllmfolckpjlhki,ehgidpndbllacpjalkiimkbadgjfnnmc,efniojlnjndmcbiieegkicadnoecjjef,jamhcnnkihinmdlkakkaopbjbbcngflc,"
		"ggkkehgbnfjpeggfpleeakpidbkibbmn,jflookgnkcckhobaglndicnbbgbonegd,imefjhfbkmcmebodilednhmaccmincoa,ojhpjlocmbogdgmfpkhlaaeamibhnphh,eeigpngbgcognadeebkilcpcaedhellh,gonpemdgkjcecdgbnaabipppbmgfggbe");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-114.0.5735.91");

	lr_think_time(27);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:lPmj98gWKVySzZJyxJNAPx2PIL1VcGMfYCGBHZDeBdk&cup2hreq=a49afa441722765421863ca69721c4627bed6d1cc01ef7eb9b6e4e9bedc2cd66", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{03e3750e-9a60-44f7-8a6a-b656a525a43b}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Windows (102+, canary/dev/beta/"
		"stable)\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.faef821457e35b44f92e45ae9c7c4424eb39c8f8bd02562a358bd2c5542570b9\"}]},\"ping\":{\"ping_freshness\":\"{a55b6538-3d84-4247-be04-221074109c46}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"1.0.2512.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1n4r:\",\"cohortname\":\"4.10.2652.1 for 113+\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":"
		"{\"package\":[{\"fp\":\"1.37a3ce45e4db03ee45245937e81291fc7f3c8faf62e4f05ad48f544a783542c3\"}]},\"ping\":{\"ping_freshness\":\"{4b7e061e-631c-4d31-ba51-dd884a00e799}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"4.10.2652.1\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"M54AndUp\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.1482735f1e6f6a7151f8bbe11abf8e6ff034bcf0466ed44f804e8a819243a7ca\"}]},\"ping\":{\"ping_freshness\":\"{8edb2496-ed72-4c03-a383-3dd0462625fd}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"9.45.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\""
		"{f5707990-d741-4b3c-b99b-5c91b787dd30}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.b5cd54a88dcc5c066af2a939c533ecfb73019547dc6d069a66cae33f255b8746\"}]},\"ping\":{\"ping_freshness\":\"{f8d078be-7f0b-4aeb-b1e8-1d65312d35b3}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"394\""
		"},{\"accept_locale\":\"RU500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.17c79175d6a9b0809c465d3636064510cf1997abb09b33c8c29fd6544cc2c9cb\"}]},\"ping\":{\"ping_freshness\":\"{4d352a05-0035-41b6-8ce2-ae9bf0fc1ea1}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"20230524.536550353.14\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{e800c79c-0557-45e5-9158-ec95d86f8369}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":"
		"{\"package\":[{\"fp\":\"1.ab8d70a60ce0fba1355fad4edab88fd4d1bccc566b230998180183d1d776992b\"}]},\"ping\":{\"ping_freshness\":\"{b996cdbc-e999-4130-bfa0-81477330462f}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"1.0.0.13\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.7e688343addf2522960fdd722e9c29e02f95540288308496d2607f35f83e551c\"}]},"
		"\"ping\":{\"ping_freshness\":\"{6d09afe7-8153-4fd9-9304-e8d78967ef50}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"8033\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.4d4a9ece68f12d31fb4ebe458e7cbbce6bd27a5d363bce3344b1f4b5c6b024b4\"}]},\"ping\":{\"ping_freshness\":\"{7b65d281-b920-4bde-8d7e-ca3ef131f866}\",\"rd\":5998},\"tag\":\""
		"default\",\"updatecheck\":{},\"version\":\"58\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{5d0419e7-2ca4-413e-8ddd-d7bbd66ac07f}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\""
		"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{59273218-b8c3-4be1-accc-d10d81b34472}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.f482550ed2921321aa4692efc86ff21e35dc41119d2c468e40fca36f6b31e460\"}]},\"ping\":{\"ping_freshness\":\"{798440d1-d685-4f0e-b897-22c9d77158e3}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"605\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.0e491a1273432618abd13b7a503c68d59c9a6918956166d33b98e2ae58c3c199\"}]},\"ping\":{\"ping_freshness\""
		":\"{a60d68ce-bf9a-4858-af90-f1575ef8d496}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"116.0.5811.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:\",\"cohortname\":\"108-and-above-all-users\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.ed2f4d0fa9d2f99837719f80e3990498314290c6a294a72296ddcada784dd278\"}]},\"ping\":{\"ping_freshness\":\"{6073f7e7-c1a8-4dd3-b199-50766110c198}\",\"rd\":5998},\""
		"updatecheck\":{},\"version\":\"2022.12.16.779\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a9c3fb119d9e91ee3cd6c5bb93122a46f8e722e1986ee209d5747c327d238f87\"}]},\"ping\":{\"ping_freshness\":\"{163981e3-1d57-4b34-94ed-3e32ab0f16bd}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"2962\"},{\"appid\":\"imefjhfbkmcmebodilednhmaccmincoa\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:1iaf:\",\"cohortname\":\"windows_flatbuffers\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3525bd7c472e4c85cadf1b8d0992ca8303b9e630831e4530e54a14a70f213a11\"}]},\"ping\":{\"ping_freshness\":\"{254e7464-2104-4de4-a74c-3d23bda71239}\",\"rd\":5998},\"tag\":\"desktop_1_flatbuffer\",\"updatecheck\":{},\"version\":\"30.2\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\""
		"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{f0e2890c-3834-48dd-a8da-b1cf679151cd}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\""
		"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{257e23e0-7341-4dcd-a878-ff9170cd3e61}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"_internal_experimental_sets\":\"false\",\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"General release\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c4137d1ea479cdf5cbe29e09e4cef452fba88fecb53cd82414432cd3825329f8\"}]},\"ping\":{\"ping_freshness\":\"{f064a3c8-d3cf-4bd9-8cf1-542be0b3e0bd}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"2023.5.17.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.19045.2965\"},\"prodversion\":\"114.0.5735.91\",\"protocol\":\"3.1\",\"requestid\":\"{bcd84ac9-ae8c-4749-beb1-56e336b54615}\",\"sessionid\":\"{c6d12b39-28e8-4c81-852c-b86508b95057}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.242\"},\"updaterversion\":\"114.0.5735.91\"}}", 
		LAST);

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("sec-ch-ua", 
		"\"Not.A/Brand\";v=\"8\", \"Chromium\";v=\"114\", \"Google Chrome\";v=\"114\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("AccountLoginRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>Pa$$word1</loginPassword><loginUser>jSmith1</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_url("603366726", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/603366726", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	lr_end_transaction("login",LR_AUTO);

	lr_start_transaction("logout");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1685898235.5.1.1685898716.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLogoutRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(12);

	web_custom_request("AccountLogoutRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLogoutRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>603366726</loginUser><base64Token>Basic alNtaXRoMTpQYSQkd29yZDE=</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("logout",LR_AUTO);

	return 0;
}