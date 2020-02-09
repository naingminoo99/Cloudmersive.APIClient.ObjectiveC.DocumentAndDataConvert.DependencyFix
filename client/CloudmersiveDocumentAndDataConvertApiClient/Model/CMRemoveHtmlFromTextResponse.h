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





@protocol CMRemoveHtmlFromTextResponse
@end

@interface CMRemoveHtmlFromTextResponse : CMObject

/* True if successful, false otherwise [optional]
 */
@property(nonatomic) NSNumber* successful;
/* Result of performing a remove HTML from string operation [optional]
 */
@property(nonatomic) NSString* textContentResult;

@end
