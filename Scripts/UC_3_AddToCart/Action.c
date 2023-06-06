Action() 
{ 
 lr_start_transaction("UC_3_AddToCart");	
	
 lr_start_transaction("open_homepage"); 
 
 web_set_sockets_option("SSL_VERSION", "AUTO"); 
 
 web_set_sockets_option("TLS_SNI", "0"); 
 
 web_url("seed",  
  "URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=114",  
  "TargetFrame=",  
  "Resource=0",  
  "Referer=",  
  "Snapshot=t18.inf",  
  "Mode=HTML",  
  LAST); 
 
 web_set_sockets_option("TLS_SNI", "1"); 
 
 web_url("www.advantageonlineshopping.com",  
  "URL=https://www.advantageonlineshopping.com/",  
  "TargetFrame=",  
  "Resource=0",  
  "Referer=",  
  "Snapshot=t19.inf",  
  "Mode=HTML",  
  EXTRARES,  
  "Url=/vendor/requirejs/require.js", ENDITEM,  
  "Url=/main.min.js", ENDITEM,  
  "Url=/services.properties", ENDITEM,  
  "Url=/app/tempFiles/popularProducts.json", ENDITEM,  
  LAST); 
 
 web_url("ALL",  
  "URL=https://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL",  
  "TargetFrame=",  
  "Resource=0",  
  "RecContentType=application/json",  
  "Referer=https://www.advantageonlineshopping.com/",  
  "Snapshot=t20.inf",  
  "Mode=HTML",  
  EXTRARES,  
  "Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM,  
  "Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM,  
  "Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM,  
  LAST); 
 
 web_custom_request("GetAccountConfigurationRequest",  
  "URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest",  
  "Method=POST",  
  "TargetFrame=",  
  "Resource=0",  
  "RecContentType=text/xml",  
  "Referer=https://www.advantageonlineshopping.com/",  
  "Snapshot=t21.inf",  
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
  "Snapshot=t22.inf",  
  "Mode=HTML",  
  LAST); 
 
 web_url("search",  
  "URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true",  
  "TargetFrame=",  
  "Resource=0",  
  "RecContentType=application/json",  
  "Referer=https://www.advantageonlineshopping.com/",  
  "Snapshot=t23.inf",  
  "Mode=HTML",  
  LAST); 
 
 web_url("home-page.html",  
  "URL=https://www.advantageonlineshopping.com/app/views/home-page.html",  
  "TargetFrame=",  
  "Resource=0",  
  "Referer=https://www.advantageonlineshopping.com/",  
  "Snapshot=t24.inf",  
  "Mode=HTML",  
  EXTRARES,  
  "Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM,  
  "Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM,  
  LAST); 
 
 lr_end_transaction("open_homepage",LR_AUTO); 
 
 lr_start_transaction("login"); 
  
 	web_reg_find("Fail=Found", 
  	"Text=Incorrect user name or password",
	LAST);
	
	web_reg_save_param_xpath(
		"ParamName=UserId",
		"QueryString=/Envelope/Body/AccountLoginResponse/StatusMessage/userId",
		SEARCH_FILTERS,
		LAST);

	web_reg_save_param_xpath(
		"ParamName=Token",
		"QueryString=/Envelope/Body/AccountLoginResponse/StatusMessage/t_authorization",
		SEARCH_FILTERS,
		LAST);

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
  "Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>{pass}</loginPassword><loginUser>{login}</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>",  
  LAST); 
  
 web_set_sockets_option("INITIAL_AUTH", "BASIC"); 
 
 web_add_header("Authorization","Basic {Token}"); 

 web_reg_save_param_json(
	"ParamName=sessionId",
	"QueryString=$.sessionId",
	SEARCH_FILTERS,
	LAST);

 web_url("userId", 
  "URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserId}",  
  "TargetFrame=",  
  "Resource=0",  
  "RecContentType=application/json", 
  "Referer=https://www.advantageonlineshopping.com/",  
  "Snapshot=t11.inf",  
  "Mode=HTML",  
  LAST); 
 lr_end_transaction("login",LR_AUTO); 
 
 lr_think_time(5);
 
 lr_start_transaction("go_to_speakers"); 
 
 web_url("products",  
  "URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/4/products",  
  "TargetFrame=",  
  "Resource=0",  
  "RecContentType=application/json",  
  "Referer=https://www.advantageonlineshopping.com/",  
  "Snapshot=t28.inf",  
  "Mode=HTML",  
  LAST); 
 
 web_url("attributes",  
  "URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/attributes",  
  "TargetFrame=",  
  "Resource=0",  
  "RecContentType=application/json",  
  "Referer=https://www.advantageonlineshopping.com/",  
  "Snapshot=t29.inf",  
  "Mode=HTML",  
  LAST); 
 
 lr_end_transaction("go_to_speakers",LR_AUTO); 
 
 lr_think_time(5);
 
 lr_start_transaction("go_to_product"); 
 
 web_url("all_data",  
  "URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data",  
  "TargetFrame=",  
  "Resource=0",  
  "RecContentType=application/json",  
  "Referer=https://www.advantageonlineshopping.com/",  
  "Snapshot=t31.inf",  
  "Mode=HTML",  
  LAST); 
 
 web_url("20",  
  "URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/20",  
  "TargetFrame=",  
  "Resource=0",  
  "RecContentType=application/json",  
  "Referer=https://www.advantageonlineshopping.com/",  
  "Snapshot=t32.inf",  
  "Mode=HTML",  
  LAST); 
 
 web_url("product-page.html",  
  "URL=https://www.advantageonlineshopping.com/app/views/product-page.html",  
  "TargetFrame=",  
  "Resource=0",  
  "Referer=https://www.advantageonlineshopping.com/",  
  "Snapshot=t33.inf",  
  "Mode=HTML",  
  LAST); 
 
 lr_end_transaction("go_to_product",LR_AUTO); 
 
 lr_start_transaction("add_to_cart"); 
 
 web_add_header("Authorization","Basic {Token}");
 
 web_add_cookie("JSESSIONID={sessionId}; DOMAIN=www.advantageonlineshopping.com");
 
 web_submit_data("Cart_add",  
  "Action=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserId}/product/20/color/414141?{quantity}=1",  
  "Method=POST",  
  "TargetFrame=",  
  "RecContentType=application/json",  
  "Referer=https://www.advantageonlineshopping.com/",  
  "Snapshot=t34.inf",  
  "Mode=HTML", 
  ITEMDATA, 
  "Name=sessionId", "Value={sessionId}", ENDITEM,  
  LAST); 
 
 lr_end_transaction("add_to_cart",LR_AUTO);
 
 lr_think_time(5);
 
 lr_start_transaction("remove_from_cart"); 
 
 web_add_header("Authorization","Basic {Token}");
 
 web_custom_request("Cart_delete",  
  "URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserId}/product/20/color/414141",  
  "Method=DELETE",  
  "TargetFrame=",  
  "Resource=0",  
  "RecContentType=application/json",  
  "Referer=https://www.advantageonlineshopping.com/",  
  "Snapshot=t35.inf",  
  "Mode=HTML",  
  LAST); 
 
 lr_end_transaction("remove_from_cart",LR_AUTO);
 
 lr_start_transaction("logout");

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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>{UserId}</loginUser><base64Token>Basic {Token}</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("logout",LR_AUTO);
	
	lr_end_transaction("UC_3_AddToCart",LR_AUTO);
 
 return 0;
}