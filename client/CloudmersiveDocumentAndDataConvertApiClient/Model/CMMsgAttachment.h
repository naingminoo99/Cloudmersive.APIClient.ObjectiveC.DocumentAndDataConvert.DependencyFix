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





@protocol CMMsgAttachment
@end

@interface CMMsgAttachment : CMObject

/* Name of the attachment, including file extension [optional]
 */
@property(nonatomic) NSString* name;
/* The MSG attachment as a byte[] [optional]
 */
@property(nonatomic) NSData* content;

@end