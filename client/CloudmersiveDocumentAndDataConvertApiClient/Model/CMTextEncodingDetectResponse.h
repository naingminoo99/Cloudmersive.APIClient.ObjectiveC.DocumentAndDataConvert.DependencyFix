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





@protocol CMTextEncodingDetectResponse
@end

@interface CMTextEncodingDetectResponse : CMObject

/* True if successful, false otherwise [optional]
 */
@property(nonatomic) NSNumber* successful;
/* Text encoding used in file; possible values are ASCII, UTF7, UTF8, UTF16, BigEndianUnicode and UTF32 [optional]
 */
@property(nonatomic) NSString* textEncoding;

@end
