#ifndef __KVM_ARM_PARA_H_
#define __KVM_ARM_PARA_H_

static inline int kvm_para_available(void)
{
	return 0;
}

static inline unsigned int kvm_arch_para_features(void)
{
	return 0;
}

static unsigned long kvm_hypercall(unsigned long *in,
				   unsigned long *out,
				   unsigned long nr)
{
	return 0;
}

#endif /* __KVM_ARM_PARA_H_ */
