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





@protocol CMRemovePptxSlidesRequest
@end

@interface CMRemovePptxSlidesRequest : CMObject

/* Optional: Bytes of the input file to operate on [optional]
 */
@property(nonatomic) NSData* inputFileBytes;
/* Optional: URL of a file to operate on as input.  This can be a public URL, or you can also use the begin-editing API to upload a document and pass in the secure URL result from that operation as the URL here (this URL is not public). [optional]
 */
@property(nonatomic) NSString* inputFileUrl;
/* Slide number (1-based) to start deleting slides; inclusive [optional]
 */
@property(nonatomic) NSNumber* startDeleteSlideNumber;
/* Slide number (1-based) to stop deleting slides; inclusive [optional]
 */
@property(nonatomic) NSNumber* endDeleteSlideNumber;

@end
