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


#import "CMPresentationResult.h"
@protocol CMPresentationResult;
@class CMPresentationResult;



@protocol CMSplitPptxPresentationResult
@end

@interface CMSplitPptxPresentationResult : CMObject


@property(nonatomic) NSArray<CMPresentationResult>* resultPresentations;
/* True if the operation was successful, false otherwise [optional]
 */
@property(nonatomic) NSNumber* successful;

@end
