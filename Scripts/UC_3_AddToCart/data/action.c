Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_user("jSmith1", 
		lr_unmask("647d0b2bd1061fc926f3b4e7e8"), 
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
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_gid=GA1.2.904682873.1685878907; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga=GA1.2.401783448.1685878901; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1685915131.7.1.1685915272.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga=GA1.1.401783448.1685878901; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1685915131.7.1.1685916371.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Not.A/Brand\";v=\"8\", \"Chromium\";v=\"114\", \"Google Chrome\";v=\"114\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("www.advantageonlineshopping.com", 
		"URL=https://www.advantageonlineshopping.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/vendor/requirejs/require.js", ENDITEM, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/app/tempFiles/popularProducts.json", ENDITEM, 
		LAST);

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("ALL", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
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
		"Snapshot=t39.inf", 
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
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(11);

	web_custom_request("AccountLoginRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t43.inf", 
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
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/4/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attributes", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/attributes", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/category-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	web_url("20", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/20", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products_2", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/4/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_url("all_data", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/product-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_submit_data("414141", 
		"Action=https://www.advantageonlineshopping.com/order/api/v1/carts/603366726/product/20/color/414141?quantity=1", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sessionId", "Value=9C61C7AD5E161209683D07DAEDA7CB04", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	lr_start_transaction("go_to_cart");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-Goog-Update-AppId", 
		"neifaoindggfcjicffkgpmnlppeffabd,hnimpnehoodheedghdeeijklkeaacbdc,gcmjkmgdlgnkkcocmoeiminaijmmjnii,obedbbhbpmojnkanicioggnmelmoomoc,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,laoigpblnllgcgjnjnllmfolckpjlhki,lmelglejhemejginpboagddgdfbepgmp,llkgjffcdpffmhiakmfcdcblohccpfmo,ehgidpndbllacpjalkiimkbadgjfnnmc,efniojlnjndmcbiieegkicadnoecjjef,hfnkpimlhhgieaddgfemjhofmfblmnib,jamhcnnkihinmdlkakkaopbjbbcngflc,ihnlcenocehgdaegdmhbidjhnhdchfmm,jflookgnkcckhobaglndicnbbgbonegd,"
		"ggkkehgbnfjpeggfpleeakpidbkibbmn,imefjhfbkmcmebodilednhmaccmincoa,oimompecagnajdejgnnjijobebaeigek,ojhpjlocmbogdgmfpkhlaaeamibhnphh,eeigpngbgcognadeebkilcpcaedhellh,gonpemdgkjcecdgbnaabipppbmgfggbe");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-114.0.5735.91");

	lr_think_time(18);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:qA0bLfl6FAzVrpaSUx7PV9W7XHAHKe4M1jn9Grd-U4I&cup2hreq=1eb0cfad541e950eb8be1b7e61bf46900fcbc0939dac0ce214267a0550f580ad", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Windows (102+, canary/dev/beta/stable)\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.faef821457e35b44f92e45ae9c7c4424eb39c8f8bd02562a358bd2c5542570b9\"}]},\"ping\":{\"ping_freshness\":\"{ac683ae3-2fff-4d1c-a7bb-a6b600883849}\",\"rd\":5998},\""
		"updatecheck\":{},\"version\":\"1.0.2512.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{44ea553e-ecbb-4913-b098-c979de164761}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\""
		"cohort\":\"1:bm1:\",\"cohortname\":\"M54AndUp\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.1482735f1e6f6a7151f8bbe11abf8e6ff034bcf0466ed44f804e8a819243a7ca\"}]},\"ping\":{\"ping_freshness\":\"{1bf94872-bf2b-4446-8153-898c7dc2e8e4}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"9.45.0\"},{\"accept_locale\":\"RU500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:\",\"cohortname\":\"Auto\",\"enabled\":true,\""
		"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.17c79175d6a9b0809c465d3636064510cf1997abb09b33c8c29fd6544cc2c9cb\"}]},\"ping\":{\"ping_freshness\":\"{044f0e54-2852-4ff0-9244-cb327d4b7e7c}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"20230524.536550353.14\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{ff740616-1bbe-4fab-a420-3a36b18df6d5}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.4d4a9ece68f12d31fb4ebe458e7cbbce6bd27a5d363bce3344b1f4b5c6b024b4\"}]},\"ping\":{\"ping_freshness\":\""
		"{1e0bfd1e-56a3-48b0-9ba1-02f783a1414a}\",\"rd\":5998},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"58\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{6237cf5f-e309-4cdf-9a56-2d2850841b43}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1"
		":lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.b5cd54a88dcc5c066af2a939c533ecfb73019547dc6d069a66cae33f255b8746\"}]},\"ping\":{\"ping_freshness\":\"{bdd01732-1982-4cb6-a98b-740861cb6aa6}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"394\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.ab8d70a60ce0fba1355fad4edab88fd4d1bccc566b230998180183d1d776992b\"}]},\"ping\":{\"ping_freshness\":\"{05581e2b-6196-46f8-a161-caa77a7c57f8}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"1.0.0.13\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\""
		"ping_freshness\":\"{5646335f-96f3-4d28-9adc-71166f17fc09}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.f482550ed2921321aa4692efc86ff21e35dc41119d2c468e40fca36f6b31e460\"}]},\"ping\":{\"ping_freshness\":\"{4755b125-c0ac-447b-9a59-9601580224e1}\",\"rd\":5998},\""
		"updatecheck\":{},\"version\":\"605\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.83d989c2a4e6c4df8052b9f429547eb638f754dc68f4088d5ecc1b8de26cd88d\"}]},\"ping\":{\"ping_freshness\":\"{0623b0f8-d518-4b99-91ab-a309d2fff31c}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"8034\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\""
		"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.9d5a226ba8b8a3a75d6c00897c0429fd5ad802f0851ff7dfca6bbfc4fe299f2f\"}]},\"ping\":{\"ping_freshness\":\"{d5769973-ff0e-4e19-8064-e9882c5aa5a4}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"116.0.5812.0\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"ping\":{\""
		"ping_freshness\":\"{63df676a-3b50-422d-bd14-f4da6645d1b1}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a9c3fb119d9e91ee3cd6c5bb93122a46f8e722e1986ee209d5747c327d238f87\"}]},\"ping\":{\"ping_freshness\":\"{21013418-2005-42f5-81b0-6efb2d814a84}\",\"rd\":5998},\"updatecheck\":{},\""
		"version\":\"2962\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:\",\"cohortname\":\"108-and-above-all-users\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.ed2f4d0fa9d2f99837719f80e3990498314290c6a294a72296ddcada784dd278\"}]},\"ping\":{\"ping_freshness\":\"{1a123675-0e96-49d3-91bf-492959ef0b07}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"2022.12.16.779\"},{\"appid\":\"imefjhfbkmcmebodilednhmaccmincoa"
		"\",\"brand\":\"GGLS\",\"cohort\":\"1:1iaf:\",\"cohortname\":\"windows_flatbuffers\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3525bd7c472e4c85cadf1b8d0992ca8303b9e630831e4530e54a14a70f213a11\"}]},\"ping\":{\"ping_freshness\":\"{5b1bb662-0bb8-4478-a22c-4d702ab5709a}\",\"rd\":5998},\"tag\":\"desktop_1_flatbuffer\",\"updatecheck\":{},\"version\":\"30.2\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1n4r:\",\""
		"cohortname\":\"4.10.2652.1 for 113+\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.37a3ce45e4db03ee45245937e81291fc7f3c8faf62e4f05ad48f544a783542c3\"}]},\"ping\":{\"ping_freshness\":\"{81180b4f-8e56-4b98-b4d3-638fcc08c078}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"4.10.2652.1\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5998,\"lang\":\""
		"ru\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{c0f833c8-36fc-4326-962a-13c277149c40}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{9f922ad7-a794-4cdb-8fdd-45e8fd84aa53}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"_internal_experimental_sets\":\"false\",\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"General release\",\"enabled\":true,\"installdate\":5998,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c4137d1ea479cdf5cbe29e09e4cef452fba88fecb53cd82414432cd3825329f8\"}]},\"ping\":{\"ping_freshness\":\"{78d5d9e6-f2db-49aa-a9aa-4bbd7ccbf9e1}\",\"rd\":5998},\"updatecheck\":{},\"version\":\"2023.5.17.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.19045.2965\"},\"prodversion\":\"114.0.5735.91\",\"protocol\":\"3.1\",\"requestid\":\"{9abc8fd1-3cbe-4a51-a40c-08695abc8e21}\",\"sessionid\":\"{f1da1517-9a27-46c3-9b74-577364506678}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.242\"},\"updaterversion\":\"114.0.5735.91\"}}", 
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

	lr_think_time(13);

	web_url("603366726_2", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/603366726", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shoppingCart.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/shoppingCart.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("go_to_cart",LR_AUTO);

	lr_start_transaction("remove_from_cart");

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	lr_think_time(22);

	web_custom_request("414141_2", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/603366726/product/20/color/414141", 
		"Method=DELETE", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("remove_from_cart",LR_AUTO);

	return 0;
}