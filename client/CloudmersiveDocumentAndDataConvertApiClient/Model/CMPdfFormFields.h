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


#import "CMPdfFormField.h"
@protocol CMPdfFormField;
@class CMPdfFormField;



@protocol CMPdfFormFields
@end

@interface CMPdfFormFields : CMObject

/* True if the operation was successful, false otherwise [optional]
 */
@property(nonatomic) NSNumber* successful;
/* Fields and field values found in the form [optional]
 */
@property(nonatomic) NSArray<CMPdfFormField>* formFields;

@end
