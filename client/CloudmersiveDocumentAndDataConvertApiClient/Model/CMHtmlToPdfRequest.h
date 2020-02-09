#import <Foundation/Foundation.h>
#import "CMObject.h"

/**
* convertapi
* Convert API lets you effortlessly convert file formats and types.
*
* OpenAPI spec version: v1
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/





@protocol CMHtmlToPdfRequest
@end

@interface CMHtmlToPdfRequest : CMObject

/* HTML to render to PDF [optional]
 */
@property(nonatomic) NSString* html;
/* Optional: Additional number of milliseconds to wait once the web page has finished loading before taking the screenshot.  Can be helpful for highly asynchronous websites. [optional]
 */
@property(nonatomic) NSNumber* extraLoadingWait;

@end
