/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __HPHP_EVAL_OBJECT_DATA_H__
#define __HPHP_EVAL_OBJECT_DATA_H__

#include <runtime/base/dynamic_object_data.h>
#include <runtime/base/complex_types.h>

namespace HPHP {
namespace Eval {
///////////////////////////////////////////////////////////////////////////////

class ClassStatement;
class ClassEvalState;

class EvalObjectData : public DynamicObjectData {
  DECLARE_OBJECT_ALLOCATION(EvalObjectData);
public:
  EvalObjectData(ClassEvalState &cls, const char* pname,
                 ObjectData *r = NULL);
  EvalObjectData(ClassEvalState &cls);
  ObjectData *dynCreate(CArrRef params, bool init /* = true */);
  void dynConstruct(CArrRef params);
  void dynConstructFromEval(VariableEnvironment &env,
                            const FunctionCallExpression *call);
  virtual void init();
  virtual void destruct();

  // properties
  virtual Array o_toArray() const;
  virtual void o_getArray(Array &props) const;
  virtual void o_setArray(CArrRef props);
  virtual bool o_exists(CStrRef prop, int64 phash,
      const char *context, int64 hash) const;
  virtual Variant o_get(CStrRef prop, int64 phash, bool error,
      const char *context, int64 hash);
  virtual Variant o_getUnchecked(CStrRef prop, int64 phash,
      const char *context, int64 hash);
  virtual Variant &o_lval(CStrRef prop, int64 phash,
      const char *context, int64 hash);
  virtual Variant o_set(CStrRef prop, int64 phash, CVarRef v, bool forInit,
      const char *context, int64 hash);
  void o_setPrivate(const char *cls, const char *s, int64 hash, CVarRef v);

  DECLARE_INSTANCE_PROP_WRAPPER_OPS

   // methods
  virtual CStrRef o_getClassName() const;
  virtual const MethodStatement *getMethodStatement(const char* name) const;

  virtual bool o_instanceof(const char *s) const;

   virtual Variant o_invoke(MethodIndex, const char *s, CArrRef params,
                            int64 hash, bool fatal = true);
   virtual Variant o_invoke_mil(const char *s, CArrRef params,
                                int64 hash, bool fatal = true);
  virtual Variant o_invoke_ex(const char *clsname, MethodIndex, const char *s,
                              CArrRef params, int64 hash,
                               bool fatal /* = false */);
  virtual Variant o_invoke_ex_mil(const char *clsname, const char *s,
                                  CArrRef params, int64 hash,
                                  bool fatal /* = false */);
  virtual Variant o_invoke_few_args(MethodIndex, const char *s, int64 hash,
                                    int count, INVOKE_FEW_ARGS_DECL_ARGS);
  virtual Variant o_invoke_few_args_mil(const char *s, int64 hash,
                                        int count, INVOKE_FEW_ARGS_DECL_ARGS);


  virtual Variant doCall(Variant v_name, Variant v_arguments, bool fatal);
  virtual Variant doGet(Variant v_name, bool error);

  // magic methods
  // __construct is handled in a special way
  virtual Variant t___destruct();
  virtual Variant t___set(Variant v_name, Variant v_value);
  virtual Variant t___get(Variant v_name);
  virtual bool t___isset(Variant v_name);
  virtual Variant t___unset(Variant v_name);
  virtual Variant t___sleep();
  virtual Variant t___wakeup();
  virtual Variant t___set_state(Variant v_properties);
  virtual String t___tostring();
  virtual Variant t___clone();
  virtual Variant &___lval(Variant v_name);
  virtual Variant &___offsetget_lval(Variant v_name);

protected:
  virtual ObjectData* cloneImpl();

  virtual bool php_sleep(Variant &ret);

private:
  ClassEvalState &m_cls;
  Array m_privates;
  mutable String m_class_name;
};

///////////////////////////////////////////////////////////////////////////////
}
}

#endif /* __HPHP_EVAL_OBJECT_DATA_H__ */
