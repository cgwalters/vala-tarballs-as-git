/* valamethodtype.c generated by valac, the Vala compiler
 * generated from valamethodtype.vala, do not modify */

/* valamethodtype.vala
 *
 * Copyright (C) 2007-2008  Jürg Billeter
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Jürg Billeter <j@bitron.ch>
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <valagee.h>


#define VALA_TYPE_CODE_NODE (vala_code_node_get_type ())
#define VALA_CODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_NODE, ValaCodeNode))
#define VALA_CODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_NODE, ValaCodeNodeClass))
#define VALA_IS_CODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_NODE))
#define VALA_IS_CODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_NODE))
#define VALA_CODE_NODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_NODE, ValaCodeNodeClass))

typedef struct _ValaCodeNode ValaCodeNode;
typedef struct _ValaCodeNodeClass ValaCodeNodeClass;
typedef struct _ValaCodeNodePrivate ValaCodeNodePrivate;

#define VALA_TYPE_CODE_VISITOR (vala_code_visitor_get_type ())
#define VALA_CODE_VISITOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_VISITOR, ValaCodeVisitor))
#define VALA_CODE_VISITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_VISITOR, ValaCodeVisitorClass))
#define VALA_IS_CODE_VISITOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_VISITOR))
#define VALA_IS_CODE_VISITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_VISITOR))
#define VALA_CODE_VISITOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_VISITOR, ValaCodeVisitorClass))

typedef struct _ValaCodeVisitor ValaCodeVisitor;
typedef struct _ValaCodeVisitorClass ValaCodeVisitorClass;

#define VALA_TYPE_CODE_CONTEXT (vala_code_context_get_type ())
#define VALA_CODE_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_CONTEXT, ValaCodeContext))
#define VALA_CODE_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_CONTEXT, ValaCodeContextClass))
#define VALA_IS_CODE_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_CONTEXT))
#define VALA_IS_CODE_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_CONTEXT))
#define VALA_CODE_CONTEXT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_CONTEXT, ValaCodeContextClass))

typedef struct _ValaCodeContext ValaCodeContext;
typedef struct _ValaCodeContextClass ValaCodeContextClass;

#define VALA_TYPE_CODE_GENERATOR (vala_code_generator_get_type ())
#define VALA_CODE_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_GENERATOR, ValaCodeGenerator))
#define VALA_CODE_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_GENERATOR, ValaCodeGeneratorClass))
#define VALA_IS_CODE_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_GENERATOR))
#define VALA_IS_CODE_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_GENERATOR))
#define VALA_CODE_GENERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_GENERATOR, ValaCodeGeneratorClass))

typedef struct _ValaCodeGenerator ValaCodeGenerator;
typedef struct _ValaCodeGeneratorClass ValaCodeGeneratorClass;

#define VALA_TYPE_DATA_TYPE (vala_data_type_get_type ())
#define VALA_DATA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DATA_TYPE, ValaDataType))
#define VALA_DATA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DATA_TYPE, ValaDataTypeClass))
#define VALA_IS_DATA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DATA_TYPE))
#define VALA_IS_DATA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DATA_TYPE))
#define VALA_DATA_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DATA_TYPE, ValaDataTypeClass))

typedef struct _ValaDataType ValaDataType;
typedef struct _ValaDataTypeClass ValaDataTypeClass;

#define VALA_TYPE_EXPRESSION (vala_expression_get_type ())
#define VALA_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_EXPRESSION, ValaExpression))
#define VALA_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_EXPRESSION, ValaExpressionClass))
#define VALA_IS_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_EXPRESSION))
#define VALA_IS_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_EXPRESSION))
#define VALA_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_EXPRESSION, ValaExpressionClass))

typedef struct _ValaExpression ValaExpression;
typedef struct _ValaExpressionClass ValaExpressionClass;

#define VALA_TYPE_SYMBOL (vala_symbol_get_type ())
#define VALA_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SYMBOL, ValaSymbol))
#define VALA_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SYMBOL, ValaSymbolClass))
#define VALA_IS_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SYMBOL))
#define VALA_IS_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SYMBOL))
#define VALA_SYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SYMBOL, ValaSymbolClass))

typedef struct _ValaSymbol ValaSymbol;
typedef struct _ValaSymbolClass ValaSymbolClass;

#define VALA_TYPE_VARIABLE (vala_variable_get_type ())
#define VALA_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_VARIABLE, ValaVariable))
#define VALA_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_VARIABLE, ValaVariableClass))
#define VALA_IS_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_VARIABLE))
#define VALA_IS_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_VARIABLE))
#define VALA_VARIABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_VARIABLE, ValaVariableClass))

typedef struct _ValaVariable ValaVariable;
typedef struct _ValaVariableClass ValaVariableClass;

#define VALA_TYPE_ATTRIBUTE (vala_attribute_get_type ())
#define VALA_ATTRIBUTE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ATTRIBUTE, ValaAttribute))
#define VALA_ATTRIBUTE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ATTRIBUTE, ValaAttributeClass))
#define VALA_IS_ATTRIBUTE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ATTRIBUTE))
#define VALA_IS_ATTRIBUTE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ATTRIBUTE))
#define VALA_ATTRIBUTE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ATTRIBUTE, ValaAttributeClass))

typedef struct _ValaAttribute ValaAttribute;
typedef struct _ValaAttributeClass ValaAttributeClass;
typedef struct _ValaDataTypePrivate ValaDataTypePrivate;

#define VALA_TYPE_SCOPE (vala_scope_get_type ())
#define VALA_SCOPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SCOPE, ValaScope))
#define VALA_SCOPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SCOPE, ValaScopeClass))
#define VALA_IS_SCOPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SCOPE))
#define VALA_IS_SCOPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SCOPE))
#define VALA_SCOPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SCOPE, ValaScopeClass))

typedef struct _ValaScope ValaScope;
typedef struct _ValaScopeClass ValaScopeClass;

#define VALA_TYPE_PARAMETER (vala_parameter_get_type ())
#define VALA_PARAMETER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_PARAMETER, ValaParameter))
#define VALA_PARAMETER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_PARAMETER, ValaParameterClass))
#define VALA_IS_PARAMETER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_PARAMETER))
#define VALA_IS_PARAMETER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_PARAMETER))
#define VALA_PARAMETER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_PARAMETER, ValaParameterClass))

typedef struct _ValaParameter ValaParameter;
typedef struct _ValaParameterClass ValaParameterClass;

#define VALA_TYPE_MEMBER_ACCESS (vala_member_access_get_type ())
#define VALA_MEMBER_ACCESS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccess))
#define VALA_MEMBER_ACCESS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccessClass))
#define VALA_IS_MEMBER_ACCESS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_MEMBER_ACCESS))
#define VALA_IS_MEMBER_ACCESS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_MEMBER_ACCESS))
#define VALA_MEMBER_ACCESS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccessClass))

typedef struct _ValaMemberAccess ValaMemberAccess;
typedef struct _ValaMemberAccessClass ValaMemberAccessClass;

#define VALA_TYPE_METHOD_TYPE (vala_method_type_get_type ())
#define VALA_METHOD_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_METHOD_TYPE, ValaMethodType))
#define VALA_METHOD_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_METHOD_TYPE, ValaMethodTypeClass))
#define VALA_IS_METHOD_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_METHOD_TYPE))
#define VALA_IS_METHOD_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_METHOD_TYPE))
#define VALA_METHOD_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_METHOD_TYPE, ValaMethodTypeClass))

typedef struct _ValaMethodType ValaMethodType;
typedef struct _ValaMethodTypeClass ValaMethodTypeClass;
typedef struct _ValaMethodTypePrivate ValaMethodTypePrivate;

#define VALA_TYPE_SUBROUTINE (vala_subroutine_get_type ())
#define VALA_SUBROUTINE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SUBROUTINE, ValaSubroutine))
#define VALA_SUBROUTINE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SUBROUTINE, ValaSubroutineClass))
#define VALA_IS_SUBROUTINE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SUBROUTINE))
#define VALA_IS_SUBROUTINE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SUBROUTINE))
#define VALA_SUBROUTINE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SUBROUTINE, ValaSubroutineClass))

typedef struct _ValaSubroutine ValaSubroutine;
typedef struct _ValaSubroutineClass ValaSubroutineClass;

#define VALA_TYPE_METHOD (vala_method_get_type ())
#define VALA_METHOD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_METHOD, ValaMethod))
#define VALA_METHOD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_METHOD, ValaMethodClass))
#define VALA_IS_METHOD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_METHOD))
#define VALA_IS_METHOD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_METHOD))
#define VALA_METHOD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_METHOD, ValaMethodClass))

typedef struct _ValaMethod ValaMethod;
typedef struct _ValaMethodClass ValaMethodClass;
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

#define VALA_TYPE_DELEGATE_TYPE (vala_delegate_type_get_type ())
#define VALA_DELEGATE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DELEGATE_TYPE, ValaDelegateType))
#define VALA_DELEGATE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DELEGATE_TYPE, ValaDelegateTypeClass))
#define VALA_IS_DELEGATE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DELEGATE_TYPE))
#define VALA_IS_DELEGATE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DELEGATE_TYPE))
#define VALA_DELEGATE_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DELEGATE_TYPE, ValaDelegateTypeClass))

typedef struct _ValaDelegateType ValaDelegateType;
typedef struct _ValaDelegateTypeClass ValaDelegateTypeClass;

#define VALA_TYPE_TYPESYMBOL (vala_typesymbol_get_type ())
#define VALA_TYPESYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_TYPESYMBOL, ValaTypeSymbol))
#define VALA_TYPESYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_TYPESYMBOL, ValaTypeSymbolClass))
#define VALA_IS_TYPESYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_TYPESYMBOL))
#define VALA_IS_TYPESYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_TYPESYMBOL))
#define VALA_TYPESYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_TYPESYMBOL, ValaTypeSymbolClass))

typedef struct _ValaTypeSymbol ValaTypeSymbol;
typedef struct _ValaTypeSymbolClass ValaTypeSymbolClass;

#define VALA_TYPE_DELEGATE (vala_delegate_get_type ())
#define VALA_DELEGATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DELEGATE, ValaDelegate))
#define VALA_DELEGATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DELEGATE, ValaDelegateClass))
#define VALA_IS_DELEGATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DELEGATE))
#define VALA_IS_DELEGATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DELEGATE))
#define VALA_DELEGATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DELEGATE, ValaDelegateClass))

typedef struct _ValaDelegate ValaDelegate;
typedef struct _ValaDelegateClass ValaDelegateClass;
#define _g_free0(var) (var = (g_free (var), NULL))

#define VALA_TYPE_PARAMETER_DIRECTION (vala_parameter_direction_get_type ())
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

struct _ValaCodeNode {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCodeNodePrivate * priv;
	GList* attributes;
};

struct _ValaCodeNodeClass {
	GTypeClass parent_class;
	void (*finalize) (ValaCodeNode *self);
	void (*accept) (ValaCodeNode* self, ValaCodeVisitor* visitor);
	void (*accept_children) (ValaCodeNode* self, ValaCodeVisitor* visitor);
	gboolean (*check) (ValaCodeNode* self, ValaCodeContext* context);
	void (*emit) (ValaCodeNode* self, ValaCodeGenerator* codegen);
	void (*replace_type) (ValaCodeNode* self, ValaDataType* old_type, ValaDataType* new_type);
	void (*replace_expression) (ValaCodeNode* self, ValaExpression* old_node, ValaExpression* new_node);
	gchar* (*to_string) (ValaCodeNode* self);
	void (*get_defined_variables) (ValaCodeNode* self, ValaCollection* collection);
	void (*get_used_variables) (ValaCodeNode* self, ValaCollection* collection);
};

struct _ValaDataType {
	ValaCodeNode parent_instance;
	ValaDataTypePrivate * priv;
};

struct _ValaDataTypeClass {
	ValaCodeNodeClass parent_class;
	gchar* (*to_qualified_string) (ValaDataType* self, ValaScope* scope);
	ValaDataType* (*copy) (ValaDataType* self);
	gboolean (*equals) (ValaDataType* self, ValaDataType* type2);
	gboolean (*stricter) (ValaDataType* self, ValaDataType* type2);
	gboolean (*compatible) (ValaDataType* self, ValaDataType* target_type);
	gboolean (*is_invokable) (ValaDataType* self);
	ValaDataType* (*get_return_type) (ValaDataType* self);
	ValaList* (*get_parameters) (ValaDataType* self);
	gboolean (*is_reference_type_or_type_parameter) (ValaDataType* self);
	gboolean (*is_array) (ValaDataType* self);
	gboolean (*is_accessible) (ValaDataType* self, ValaSymbol* sym);
	ValaSymbol* (*get_member) (ValaDataType* self, const gchar* member_name);
	ValaSymbol* (*get_pointer_member) (ValaDataType* self, const gchar* member_name);
	gboolean (*is_real_struct_type) (ValaDataType* self);
	gboolean (*is_disposable) (ValaDataType* self);
	ValaDataType* (*get_actual_type) (ValaDataType* self, ValaDataType* derived_instance_type, ValaMemberAccess* method_access, ValaCodeNode* node_reference);
};

struct _ValaMethodType {
	ValaDataType parent_instance;
	ValaMethodTypePrivate * priv;
};

struct _ValaMethodTypeClass {
	ValaDataTypeClass parent_class;
};

struct _ValaMethodTypePrivate {
	ValaMethod* _method_symbol;
};

typedef enum  {
	VALA_PARAMETER_DIRECTION_IN,
	VALA_PARAMETER_DIRECTION_OUT,
	VALA_PARAMETER_DIRECTION_REF
} ValaParameterDirection;


static gpointer vala_method_type_parent_class = NULL;

gpointer vala_code_node_ref (gpointer instance);
void vala_code_node_unref (gpointer instance);
GParamSpec* vala_param_spec_code_node (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_node (GValue* value, gpointer v_object);
void vala_value_take_code_node (GValue* value, gpointer v_object);
gpointer vala_value_get_code_node (const GValue* value);
GType vala_code_node_get_type (void) G_GNUC_CONST;
gpointer vala_code_visitor_ref (gpointer instance);
void vala_code_visitor_unref (gpointer instance);
GParamSpec* vala_param_spec_code_visitor (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_visitor (GValue* value, gpointer v_object);
void vala_value_take_code_visitor (GValue* value, gpointer v_object);
gpointer vala_value_get_code_visitor (const GValue* value);
GType vala_code_visitor_get_type (void) G_GNUC_CONST;
gpointer vala_code_context_ref (gpointer instance);
void vala_code_context_unref (gpointer instance);
GParamSpec* vala_param_spec_code_context (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_context (GValue* value, gpointer v_object);
void vala_value_take_code_context (GValue* value, gpointer v_object);
gpointer vala_value_get_code_context (const GValue* value);
GType vala_code_context_get_type (void) G_GNUC_CONST;
GType vala_code_generator_get_type (void) G_GNUC_CONST;
GType vala_data_type_get_type (void) G_GNUC_CONST;
GType vala_expression_get_type (void) G_GNUC_CONST;
GType vala_symbol_get_type (void) G_GNUC_CONST;
GType vala_variable_get_type (void) G_GNUC_CONST;
GType vala_attribute_get_type (void) G_GNUC_CONST;
gpointer vala_scope_ref (gpointer instance);
void vala_scope_unref (gpointer instance);
GParamSpec* vala_param_spec_scope (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_scope (GValue* value, gpointer v_object);
void vala_value_take_scope (GValue* value, gpointer v_object);
gpointer vala_value_get_scope (const GValue* value);
GType vala_scope_get_type (void) G_GNUC_CONST;
GType vala_parameter_get_type (void) G_GNUC_CONST;
GType vala_member_access_get_type (void) G_GNUC_CONST;
GType vala_method_type_get_type (void) G_GNUC_CONST;
GType vala_subroutine_get_type (void) G_GNUC_CONST;
GType vala_method_get_type (void) G_GNUC_CONST;
#define VALA_METHOD_TYPE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_METHOD_TYPE, ValaMethodTypePrivate))
enum  {
	VALA_METHOD_TYPE_DUMMY_PROPERTY
};
ValaMethodType* vala_method_type_new (ValaMethod* method_symbol);
ValaMethodType* vala_method_type_construct (GType object_type, ValaMethod* method_symbol);
ValaDataType* vala_data_type_construct (GType object_type);
void vala_method_type_set_method_symbol (ValaMethodType* self, ValaMethod* value);
static gboolean vala_method_type_real_is_invokable (ValaDataType* base);
static ValaDataType* vala_method_type_real_get_return_type (ValaDataType* base);
ValaMethod* vala_method_type_get_method_symbol (ValaMethodType* self);
ValaDataType* vala_method_get_return_type (ValaMethod* self);
static ValaList* vala_method_type_real_get_parameters (ValaDataType* base);
ValaList* vala_method_get_parameters (ValaMethod* self);
static ValaDataType* vala_method_type_real_copy (ValaDataType* base);
static gboolean vala_method_type_real_compatible (ValaDataType* base, ValaDataType* target_type);
GType vala_delegate_type_get_type (void) G_GNUC_CONST;
GType vala_typesymbol_get_type (void) G_GNUC_CONST;
GType vala_delegate_get_type (void) G_GNUC_CONST;
ValaDelegate* vala_delegate_type_get_delegate_symbol (ValaDelegateType* self);
gboolean vala_delegate_matches_method (ValaDelegate* self, ValaMethod* m, ValaDataType* dt);
static gchar* vala_method_type_real_to_qualified_string (ValaDataType* base, ValaScope* scope);
gchar* vala_symbol_get_full_name (ValaSymbol* self);
static ValaSymbol* vala_method_type_real_get_member (ValaDataType* base, const gchar* member_name);
gboolean vala_method_get_coroutine (ValaMethod* self);
ValaMethod* vala_method_get_callback_method (ValaMethod* self);
gchar* vala_method_type_to_prototype_string (ValaMethodType* self, gboolean with_type_parameters);
ValaDataType* vala_data_type_get_return_type (ValaDataType* self);
gchar* vala_code_node_to_string (ValaCodeNode* self);
ValaList* vala_data_type_get_parameters (ValaDataType* self);
gboolean vala_parameter_get_ellipsis (ValaParameter* self);
GType vala_parameter_direction_get_type (void) G_GNUC_CONST;
ValaParameterDirection vala_parameter_get_direction (ValaParameter* self);
ValaDataType* vala_variable_get_variable_type (ValaVariable* self);
gboolean vala_data_type_get_value_owned (ValaDataType* self);
gboolean vala_data_type_is_weak (ValaDataType* self);
gchar* vala_data_type_to_qualified_string (ValaDataType* self, ValaScope* scope);
const gchar* vala_symbol_get_name (ValaSymbol* self);
ValaExpression* vala_variable_get_initializer (ValaVariable* self);
static void vala_method_type_finalize (ValaCodeNode* obj);


ValaMethodType* vala_method_type_construct (GType object_type, ValaMethod* method_symbol) {
	ValaMethodType* self = NULL;
	ValaMethod* _tmp0_;
	g_return_val_if_fail (method_symbol != NULL, NULL);
	self = (ValaMethodType*) vala_data_type_construct (object_type);
	_tmp0_ = method_symbol;
	vala_method_type_set_method_symbol (self, _tmp0_);
	return self;
}


ValaMethodType* vala_method_type_new (ValaMethod* method_symbol) {
	return vala_method_type_construct (VALA_TYPE_METHOD_TYPE, method_symbol);
}


static gboolean vala_method_type_real_is_invokable (ValaDataType* base) {
	ValaMethodType * self;
	gboolean result = FALSE;
	self = (ValaMethodType*) base;
	result = TRUE;
	return result;
}


static gpointer _vala_code_node_ref0 (gpointer self) {
	return self ? vala_code_node_ref (self) : NULL;
}


static ValaDataType* vala_method_type_real_get_return_type (ValaDataType* base) {
	ValaMethodType * self;
	ValaDataType* result = NULL;
	ValaMethod* _tmp0_;
	ValaDataType* _tmp1_;
	ValaDataType* _tmp2_;
	ValaDataType* _tmp3_;
	self = (ValaMethodType*) base;
	_tmp0_ = self->priv->_method_symbol;
	_tmp1_ = vala_method_get_return_type (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = _vala_code_node_ref0 (_tmp2_);
	result = _tmp3_;
	return result;
}


static ValaList* vala_method_type_real_get_parameters (ValaDataType* base) {
	ValaMethodType * self;
	ValaList* result = NULL;
	ValaMethod* _tmp0_;
	ValaList* _tmp1_ = NULL;
	self = (ValaMethodType*) base;
	_tmp0_ = self->priv->_method_symbol;
	_tmp1_ = vala_method_get_parameters (_tmp0_);
	result = _tmp1_;
	return result;
}


static ValaDataType* vala_method_type_real_copy (ValaDataType* base) {
	ValaMethodType * self;
	ValaDataType* result = NULL;
	ValaMethod* _tmp0_;
	ValaMethodType* _tmp1_;
	self = (ValaMethodType*) base;
	_tmp0_ = self->priv->_method_symbol;
	_tmp1_ = vala_method_type_new (_tmp0_);
	result = (ValaDataType*) _tmp1_;
	return result;
}


static gboolean vala_method_type_real_compatible (ValaDataType* base, ValaDataType* target_type) {
	ValaMethodType * self;
	gboolean result = FALSE;
	ValaDataType* _tmp0_;
	ValaDelegateType* _tmp1_;
	ValaDelegateType* dt;
	ValaDelegateType* _tmp2_;
	ValaDelegateType* _tmp3_;
	ValaDelegate* _tmp4_;
	ValaDelegate* _tmp5_;
	ValaMethod* _tmp6_;
	ValaDelegateType* _tmp7_;
	gboolean _tmp8_ = FALSE;
	self = (ValaMethodType*) base;
	g_return_val_if_fail (target_type != NULL, FALSE);
	_tmp0_ = target_type;
	_tmp1_ = _vala_code_node_ref0 (VALA_IS_DELEGATE_TYPE (_tmp0_) ? ((ValaDelegateType*) _tmp0_) : NULL);
	dt = _tmp1_;
	_tmp2_ = dt;
	if (_tmp2_ == NULL) {
		result = FALSE;
		_vala_code_node_unref0 (dt);
		return result;
	}
	_tmp3_ = dt;
	_tmp4_ = vala_delegate_type_get_delegate_symbol (_tmp3_);
	_tmp5_ = _tmp4_;
	_tmp6_ = self->priv->_method_symbol;
	_tmp7_ = dt;
	_tmp8_ = vala_delegate_matches_method (_tmp5_, _tmp6_, (ValaDataType*) _tmp7_);
	result = _tmp8_;
	_vala_code_node_unref0 (dt);
	return result;
}


static gchar* vala_method_type_real_to_qualified_string (ValaDataType* base, ValaScope* scope) {
	ValaMethodType * self;
	gchar* result = NULL;
	ValaMethod* _tmp0_;
	gchar* _tmp1_ = NULL;
	self = (ValaMethodType*) base;
	_tmp0_ = self->priv->_method_symbol;
	_tmp1_ = vala_symbol_get_full_name ((ValaSymbol*) _tmp0_);
	result = _tmp1_;
	return result;
}


static ValaSymbol* vala_method_type_real_get_member (ValaDataType* base, const gchar* member_name) {
	ValaMethodType * self;
	ValaSymbol* result = NULL;
	gboolean _tmp0_ = FALSE;
	ValaMethod* _tmp1_;
	gboolean _tmp2_;
	gboolean _tmp3_;
	gboolean _tmp5_;
	self = (ValaMethodType*) base;
	g_return_val_if_fail (member_name != NULL, NULL);
	_tmp1_ = self->priv->_method_symbol;
	_tmp2_ = vala_method_get_coroutine (_tmp1_);
	_tmp3_ = _tmp2_;
	if (_tmp3_) {
		const gchar* _tmp4_;
		_tmp4_ = member_name;
		_tmp0_ = g_strcmp0 (_tmp4_, "begin") == 0;
	} else {
		_tmp0_ = FALSE;
	}
	_tmp5_ = _tmp0_;
	if (_tmp5_) {
		ValaMethod* _tmp6_;
		ValaSymbol* _tmp7_;
		_tmp6_ = self->priv->_method_symbol;
		_tmp7_ = _vala_code_node_ref0 ((ValaSymbol*) _tmp6_);
		result = _tmp7_;
		return result;
	} else {
		gboolean _tmp8_ = FALSE;
		ValaMethod* _tmp9_;
		gboolean _tmp10_;
		gboolean _tmp11_;
		gboolean _tmp13_;
		_tmp9_ = self->priv->_method_symbol;
		_tmp10_ = vala_method_get_coroutine (_tmp9_);
		_tmp11_ = _tmp10_;
		if (_tmp11_) {
			const gchar* _tmp12_;
			_tmp12_ = member_name;
			_tmp8_ = g_strcmp0 (_tmp12_, "end") == 0;
		} else {
			_tmp8_ = FALSE;
		}
		_tmp13_ = _tmp8_;
		if (_tmp13_) {
			ValaMethod* _tmp14_;
			ValaSymbol* _tmp15_;
			_tmp14_ = self->priv->_method_symbol;
			_tmp15_ = _vala_code_node_ref0 ((ValaSymbol*) _tmp14_);
			result = _tmp15_;
			return result;
		} else {
			gboolean _tmp16_ = FALSE;
			ValaMethod* _tmp17_;
			gboolean _tmp18_;
			gboolean _tmp19_;
			gboolean _tmp21_;
			_tmp17_ = self->priv->_method_symbol;
			_tmp18_ = vala_method_get_coroutine (_tmp17_);
			_tmp19_ = _tmp18_;
			if (_tmp19_) {
				const gchar* _tmp20_;
				_tmp20_ = member_name;
				_tmp16_ = g_strcmp0 (_tmp20_, "callback") == 0;
			} else {
				_tmp16_ = FALSE;
			}
			_tmp21_ = _tmp16_;
			if (_tmp21_) {
				ValaMethod* _tmp22_;
				ValaMethod* _tmp23_ = NULL;
				_tmp22_ = self->priv->_method_symbol;
				_tmp23_ = vala_method_get_callback_method (_tmp22_);
				result = (ValaSymbol*) _tmp23_;
				return result;
			}
		}
	}
	result = NULL;
	return result;
}


gchar* vala_method_type_to_prototype_string (ValaMethodType* self, gboolean with_type_parameters) {
	gchar* result = NULL;
	ValaDataType* _tmp0_ = NULL;
	ValaDataType* _tmp1_;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_;
	gchar* _tmp4_ = NULL;
	gchar* _tmp5_;
	gchar* _tmp6_ = NULL;
	gchar* _tmp7_;
	gchar* proto;
	gint i;
	const gchar* _tmp73_;
	gchar* _tmp74_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = vala_data_type_get_return_type ((ValaDataType*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_code_node_to_string ((ValaCodeNode*) _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = vala_code_node_to_string ((ValaCodeNode*) self);
	_tmp5_ = _tmp4_;
	_tmp6_ = g_strdup_printf ("%s %s (", _tmp3_, _tmp5_);
	_tmp7_ = _tmp6_;
	_g_free0 (_tmp5_);
	_g_free0 (_tmp3_);
	_vala_code_node_unref0 (_tmp1_);
	proto = _tmp7_;
	i = 1;
	{
		ValaList* _tmp8_ = NULL;
		ValaList* _param_list;
		ValaList* _tmp9_;
		gint _tmp10_;
		gint _tmp11_;
		gint _param_size;
		gint _param_index;
		_tmp8_ = vala_data_type_get_parameters ((ValaDataType*) self);
		_param_list = _tmp8_;
		_tmp9_ = _param_list;
		_tmp10_ = vala_collection_get_size ((ValaCollection*) _tmp9_);
		_tmp11_ = _tmp10_;
		_param_size = _tmp11_;
		_param_index = -1;
		while (TRUE) {
			gint _tmp12_;
			gint _tmp13_;
			gint _tmp14_;
			ValaList* _tmp15_;
			gint _tmp16_;
			gpointer _tmp17_ = NULL;
			ValaParameter* param;
			gint _tmp18_;
			ValaParameter* _tmp21_;
			gboolean _tmp22_;
			gboolean _tmp23_;
			ValaParameter* _tmp26_;
			ValaParameterDirection _tmp27_;
			ValaParameterDirection _tmp28_;
			const gchar* _tmp52_;
			ValaParameter* _tmp53_;
			ValaDataType* _tmp54_;
			ValaDataType* _tmp55_;
			gchar* _tmp56_ = NULL;
			gchar* _tmp57_;
			ValaParameter* _tmp58_;
			const gchar* _tmp59_;
			const gchar* _tmp60_;
			gchar* _tmp61_ = NULL;
			ValaParameter* _tmp62_;
			ValaExpression* _tmp63_;
			ValaExpression* _tmp64_;
			gint _tmp72_;
			_tmp12_ = _param_index;
			_param_index = _tmp12_ + 1;
			_tmp13_ = _param_index;
			_tmp14_ = _param_size;
			if (!(_tmp13_ < _tmp14_)) {
				break;
			}
			_tmp15_ = _param_list;
			_tmp16_ = _param_index;
			_tmp17_ = vala_list_get (_tmp15_, _tmp16_);
			param = (ValaParameter*) _tmp17_;
			_tmp18_ = i;
			if (_tmp18_ > 1) {
				const gchar* _tmp19_;
				gchar* _tmp20_;
				_tmp19_ = proto;
				_tmp20_ = g_strconcat (_tmp19_, ", ", NULL);
				_g_free0 (proto);
				proto = _tmp20_;
			}
			_tmp21_ = param;
			_tmp22_ = vala_parameter_get_ellipsis (_tmp21_);
			_tmp23_ = _tmp22_;
			if (_tmp23_) {
				const gchar* _tmp24_;
				gchar* _tmp25_;
				_tmp24_ = proto;
				_tmp25_ = g_strconcat (_tmp24_, "...", NULL);
				_g_free0 (proto);
				proto = _tmp25_;
				_vala_code_node_unref0 (param);
				continue;
			}
			_tmp26_ = param;
			_tmp27_ = vala_parameter_get_direction (_tmp26_);
			_tmp28_ = _tmp27_;
			if (_tmp28_ == VALA_PARAMETER_DIRECTION_IN) {
				ValaParameter* _tmp29_;
				ValaDataType* _tmp30_;
				ValaDataType* _tmp31_;
				gboolean _tmp32_;
				gboolean _tmp33_;
				_tmp29_ = param;
				_tmp30_ = vala_variable_get_variable_type ((ValaVariable*) _tmp29_);
				_tmp31_ = _tmp30_;
				_tmp32_ = vala_data_type_get_value_owned (_tmp31_);
				_tmp33_ = _tmp32_;
				if (_tmp33_) {
					const gchar* _tmp34_;
					gchar* _tmp35_;
					_tmp34_ = proto;
					_tmp35_ = g_strconcat (_tmp34_, "owned ", NULL);
					_g_free0 (proto);
					proto = _tmp35_;
				}
			} else {
				ValaParameter* _tmp36_;
				ValaParameterDirection _tmp37_;
				ValaParameterDirection _tmp38_;
				ValaParameter* _tmp46_;
				ValaDataType* _tmp47_;
				ValaDataType* _tmp48_;
				gboolean _tmp49_ = FALSE;
				_tmp36_ = param;
				_tmp37_ = vala_parameter_get_direction (_tmp36_);
				_tmp38_ = _tmp37_;
				if (_tmp38_ == VALA_PARAMETER_DIRECTION_REF) {
					const gchar* _tmp39_;
					gchar* _tmp40_;
					_tmp39_ = proto;
					_tmp40_ = g_strconcat (_tmp39_, "ref ", NULL);
					_g_free0 (proto);
					proto = _tmp40_;
				} else {
					ValaParameter* _tmp41_;
					ValaParameterDirection _tmp42_;
					ValaParameterDirection _tmp43_;
					_tmp41_ = param;
					_tmp42_ = vala_parameter_get_direction (_tmp41_);
					_tmp43_ = _tmp42_;
					if (_tmp43_ == VALA_PARAMETER_DIRECTION_OUT) {
						const gchar* _tmp44_;
						gchar* _tmp45_;
						_tmp44_ = proto;
						_tmp45_ = g_strconcat (_tmp44_, "out ", NULL);
						_g_free0 (proto);
						proto = _tmp45_;
					}
				}
				_tmp46_ = param;
				_tmp47_ = vala_variable_get_variable_type ((ValaVariable*) _tmp46_);
				_tmp48_ = _tmp47_;
				_tmp49_ = vala_data_type_is_weak (_tmp48_);
				if (_tmp49_) {
					const gchar* _tmp50_;
					gchar* _tmp51_;
					_tmp50_ = proto;
					_tmp51_ = g_strconcat (_tmp50_, "unowned ", NULL);
					_g_free0 (proto);
					proto = _tmp51_;
				}
			}
			_tmp52_ = proto;
			_tmp53_ = param;
			_tmp54_ = vala_variable_get_variable_type ((ValaVariable*) _tmp53_);
			_tmp55_ = _tmp54_;
			_tmp56_ = vala_data_type_to_qualified_string (_tmp55_, NULL);
			_tmp57_ = _tmp56_;
			_tmp58_ = param;
			_tmp59_ = vala_symbol_get_name ((ValaSymbol*) _tmp58_);
			_tmp60_ = _tmp59_;
			_tmp61_ = g_strdup_printf ("%s%s %s", _tmp52_, _tmp57_, _tmp60_);
			_g_free0 (proto);
			proto = _tmp61_;
			_g_free0 (_tmp57_);
			_tmp62_ = param;
			_tmp63_ = vala_variable_get_initializer ((ValaVariable*) _tmp62_);
			_tmp64_ = _tmp63_;
			if (_tmp64_ != NULL) {
				const gchar* _tmp65_;
				ValaParameter* _tmp66_;
				ValaExpression* _tmp67_;
				ValaExpression* _tmp68_;
				gchar* _tmp69_ = NULL;
				gchar* _tmp70_;
				gchar* _tmp71_ = NULL;
				_tmp65_ = proto;
				_tmp66_ = param;
				_tmp67_ = vala_variable_get_initializer ((ValaVariable*) _tmp66_);
				_tmp68_ = _tmp67_;
				_tmp69_ = vala_code_node_to_string ((ValaCodeNode*) _tmp68_);
				_tmp70_ = _tmp69_;
				_tmp71_ = g_strdup_printf ("%s = %s", _tmp65_, _tmp70_);
				_g_free0 (proto);
				proto = _tmp71_;
				_g_free0 (_tmp70_);
			}
			_tmp72_ = i;
			i = _tmp72_ + 1;
			_vala_code_node_unref0 (param);
		}
		_vala_iterable_unref0 (_param_list);
	}
	_tmp73_ = proto;
	_tmp74_ = g_strconcat (_tmp73_, ")", NULL);
	result = _tmp74_;
	_g_free0 (proto);
	return result;
}


ValaMethod* vala_method_type_get_method_symbol (ValaMethodType* self) {
	ValaMethod* result;
	ValaMethod* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_method_symbol;
	result = _tmp0_;
	return result;
}


void vala_method_type_set_method_symbol (ValaMethodType* self, ValaMethod* value) {
	ValaMethod* _tmp0_;
	ValaMethod* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_code_node_ref0 (_tmp0_);
	_vala_code_node_unref0 (self->priv->_method_symbol);
	self->priv->_method_symbol = _tmp1_;
}


static void vala_method_type_class_init (ValaMethodTypeClass * klass) {
	vala_method_type_parent_class = g_type_class_peek_parent (klass);
	VALA_CODE_NODE_CLASS (klass)->finalize = vala_method_type_finalize;
	g_type_class_add_private (klass, sizeof (ValaMethodTypePrivate));
	VALA_DATA_TYPE_CLASS (klass)->is_invokable = vala_method_type_real_is_invokable;
	VALA_DATA_TYPE_CLASS (klass)->get_return_type = vala_method_type_real_get_return_type;
	VALA_DATA_TYPE_CLASS (klass)->get_parameters = vala_method_type_real_get_parameters;
	VALA_DATA_TYPE_CLASS (klass)->copy = vala_method_type_real_copy;
	VALA_DATA_TYPE_CLASS (klass)->compatible = vala_method_type_real_compatible;
	VALA_DATA_TYPE_CLASS (klass)->to_qualified_string = vala_method_type_real_to_qualified_string;
	VALA_DATA_TYPE_CLASS (klass)->get_member = vala_method_type_real_get_member;
}


static void vala_method_type_instance_init (ValaMethodType * self) {
	self->priv = VALA_METHOD_TYPE_GET_PRIVATE (self);
}


static void vala_method_type_finalize (ValaCodeNode* obj) {
	ValaMethodType * self;
	self = VALA_METHOD_TYPE (obj);
	_vala_code_node_unref0 (self->priv->_method_symbol);
	VALA_CODE_NODE_CLASS (vala_method_type_parent_class)->finalize (obj);
}


/**
 * The type of a method referencea.
 */
GType vala_method_type_get_type (void) {
	static volatile gsize vala_method_type_type_id__volatile = 0;
	if (g_once_init_enter (&vala_method_type_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaMethodTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_method_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaMethodType), 0, (GInstanceInitFunc) vala_method_type_instance_init, NULL };
		GType vala_method_type_type_id;
		vala_method_type_type_id = g_type_register_static (VALA_TYPE_DATA_TYPE, "ValaMethodType", &g_define_type_info, 0);
		g_once_init_leave (&vala_method_type_type_id__volatile, vala_method_type_type_id);
	}
	return vala_method_type_type_id__volatile;
}



